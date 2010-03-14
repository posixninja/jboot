int arm_init();

unsigned int arm_read_control();
void arm_write_control(unsigned int value);

unsigned int arm_read_auxiliary_control();
void arm_write_auxiliary_control(unsigned int value);

void arm_write_access_controls();

void arm_invalidate_instruction_cache();
void arm_invalidate_data_cache();
