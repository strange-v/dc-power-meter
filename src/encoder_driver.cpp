#include <encoder_driver.h>

void encoder_read(lv_indev_drv_t *drv, lv_indev_data_t *data)
{
    data->enc_diff = enc_get_new_moves();

    if (digitalRead(ENC_BTN) == LOW)
        data->state = LV_INDEV_STATE_PRESSED;
    else
        data->state = LV_INDEV_STATE_RELEASED;
}

int16_t enc_get_new_moves()
{
    if (encLastCounter == encCounter)
        return 0;

    int16_t diff = encLastCounter - encCounter;
    encLastCounter = encCounter;
    
    return diff;
}

void update_encoder()
{
    static uint8_t old_AB = 3;                                                               // Lookup table index
    static int8_t encval = 0;                                                                // Encoder value
    static const int8_t enc_states[] = {0, -1, 1, 0, 1, 0, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0}; // Lookup table

    old_AB <<= 2; // Remember previous state

    if (digitalRead(ENC_A))
        old_AB |= 0x02; // Add current state of pin A
    if (digitalRead(ENC_B))
        old_AB |= 0x01; // Add current state of pin B

    encval += enc_states[(old_AB & 0x0f)];

    // Update counter if encoder has rotated a full indent, that is at least 4 steps
    if (encval > 3)
    {
        encCounter++;
        encval = 0;
    }
    else if (encval < -3)
    {
        encCounter--;
        encval = 0;
    }
}