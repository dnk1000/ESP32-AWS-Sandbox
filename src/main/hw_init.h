#ifndef ___HW_INIT_H___
#define ___HW_INIT_H___



#define I2C_EXAMPLE_MASTER_SCL_IO           4       /*!< gpio number for I2C master clock */
#define I2C_EXAMPLE_MASTER_SDA_IO           5       /*!< gpio number for I2C master data  */
#define I2C_EXAMPLE_MASTER_NUM I2C_NUM_1            /*!< I2C port number for master dev */
#define I2C_EXAMPLE_MASTER_TX_BUF_DISABLE   0       /*!< I2C master do not need buffer */
#define I2C_EXAMPLE_MASTER_RX_BUF_DISABLE   0       /*!< I2C master do not need buffer */
#define I2C_EXAMPLE_MASTER_FREQ_HZ          100000  /*!< I2C master clock frequency */


/* prototypes */
void i2c_example_master_init(void);
void initialise_wifi(void);

#endif // ___HW_INIT_H___
