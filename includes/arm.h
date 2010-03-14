int arm_init();

unsigned int arm_read_control();
void arm_write_control(unsigned int value);

unsigned int arm_read_auxiliary_control();
void arm_write_auxiliary_control(unsigned int value);
void arm_enable_level1_cache();

void arm_set_translation_table_base(void* base);
void arm_set_domain_access_control(unsigned int domain);

void arm_set_access_control();

void arm_invalidate_instruction_cache();
void arm_invalidate_data_cache();
void arm_clean_data_cache_mva();

void arm_invalidate_tlb();
