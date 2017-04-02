#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <hw/common.h>

/* analyzer */
#define CSR_ANALYZER_BASE 0xe000b800
#define CSR_ANALYZER_FRONTEND_TRIGGER_VALUE_ADDR 0xe000b800
#define CSR_ANALYZER_FRONTEND_TRIGGER_VALUE_SIZE 12
#define CSR_ANALYZER_FRONTEND_TRIGGER_MASK_ADDR 0xe000b830
#define CSR_ANALYZER_FRONTEND_TRIGGER_MASK_SIZE 12
#define CSR_ANALYZER_FRONTEND_SUBSAMPLER_VALUE_ADDR 0xe000b860
#define CSR_ANALYZER_FRONTEND_SUBSAMPLER_VALUE_SIZE 2
static inline unsigned short int analyzer_frontend_subsampler_value_read(void) {
	unsigned short int r = MMPTR(0xe000b860);
	r <<= 8;
	r |= MMPTR(0xe000b864);
	return r;
}
static inline void analyzer_frontend_subsampler_value_write(unsigned short int value) {
	MMPTR(0xe000b860) = value >> 8;
	MMPTR(0xe000b864) = value;
}
#define CSR_ANALYZER_STORAGE_START_ADDR 0xe000b868
#define CSR_ANALYZER_STORAGE_START_SIZE 1
static inline unsigned char analyzer_storage_start_read(void) {
	unsigned char r = MMPTR(0xe000b868);
	return r;
}
static inline void analyzer_storage_start_write(unsigned char value) {
	MMPTR(0xe000b868) = value;
}
#define CSR_ANALYZER_STORAGE_LENGTH_ADDR 0xe000b86c
#define CSR_ANALYZER_STORAGE_LENGTH_SIZE 2
static inline unsigned short int analyzer_storage_length_read(void) {
	unsigned short int r = MMPTR(0xe000b86c);
	r <<= 8;
	r |= MMPTR(0xe000b870);
	return r;
}
static inline void analyzer_storage_length_write(unsigned short int value) {
	MMPTR(0xe000b86c) = value >> 8;
	MMPTR(0xe000b870) = value;
}
#define CSR_ANALYZER_STORAGE_OFFSET_ADDR 0xe000b874
#define CSR_ANALYZER_STORAGE_OFFSET_SIZE 2
static inline unsigned short int analyzer_storage_offset_read(void) {
	unsigned short int r = MMPTR(0xe000b874);
	r <<= 8;
	r |= MMPTR(0xe000b878);
	return r;
}
static inline void analyzer_storage_offset_write(unsigned short int value) {
	MMPTR(0xe000b874) = value >> 8;
	MMPTR(0xe000b878) = value;
}
#define CSR_ANALYZER_STORAGE_IDLE_ADDR 0xe000b87c
#define CSR_ANALYZER_STORAGE_IDLE_SIZE 1
static inline unsigned char analyzer_storage_idle_read(void) {
	unsigned char r = MMPTR(0xe000b87c);
	return r;
}
#define CSR_ANALYZER_STORAGE_WAIT_ADDR 0xe000b880
#define CSR_ANALYZER_STORAGE_WAIT_SIZE 1
static inline unsigned char analyzer_storage_wait_read(void) {
	unsigned char r = MMPTR(0xe000b880);
	return r;
}
#define CSR_ANALYZER_STORAGE_RUN_ADDR 0xe000b884
#define CSR_ANALYZER_STORAGE_RUN_SIZE 1
static inline unsigned char analyzer_storage_run_read(void) {
	unsigned char r = MMPTR(0xe000b884);
	return r;
}
#define CSR_ANALYZER_STORAGE_MEM_VALID_ADDR 0xe000b888
#define CSR_ANALYZER_STORAGE_MEM_VALID_SIZE 1
static inline unsigned char analyzer_storage_mem_valid_read(void) {
	unsigned char r = MMPTR(0xe000b888);
	return r;
}
#define CSR_ANALYZER_STORAGE_MEM_READY_ADDR 0xe000b88c
#define CSR_ANALYZER_STORAGE_MEM_READY_SIZE 1
static inline unsigned char analyzer_storage_mem_ready_read(void) {
	unsigned char r = MMPTR(0xe000b88c);
	return r;
}
static inline void analyzer_storage_mem_ready_write(unsigned char value) {
	MMPTR(0xe000b88c) = value;
}
#define CSR_ANALYZER_STORAGE_MEM_DATA_ADDR 0xe000b890
#define CSR_ANALYZER_STORAGE_MEM_DATA_SIZE 12

/* checker */
#define CSR_CHECKER_BASE 0xe000a800
#define CSR_CHECKER_RESET_ADDR 0xe000a800
#define CSR_CHECKER_RESET_SIZE 1
static inline unsigned char checker_reset_read(void) {
	unsigned char r = MMPTR(0xe000a800);
	return r;
}
static inline void checker_reset_write(unsigned char value) {
	MMPTR(0xe000a800) = value;
}
#define CSR_CHECKER_START_ADDR 0xe000a804
#define CSR_CHECKER_START_SIZE 1
static inline unsigned char checker_start_read(void) {
	unsigned char r = MMPTR(0xe000a804);
	return r;
}
static inline void checker_start_write(unsigned char value) {
	MMPTR(0xe000a804) = value;
}
#define CSR_CHECKER_BASE_ADDR 0xe000a808
#define CSR_CHECKER_BASE_SIZE 4
static inline unsigned int checker_base_read(void) {
	unsigned int r = MMPTR(0xe000a808);
	r <<= 8;
	r |= MMPTR(0xe000a80c);
	r <<= 8;
	r |= MMPTR(0xe000a810);
	r <<= 8;
	r |= MMPTR(0xe000a814);
	return r;
}
static inline void checker_base_write(unsigned int value) {
	MMPTR(0xe000a808) = value >> 24;
	MMPTR(0xe000a80c) = value >> 16;
	MMPTR(0xe000a810) = value >> 8;
	MMPTR(0xe000a814) = value;
}
#define CSR_CHECKER_LENGTH_ADDR 0xe000a818
#define CSR_CHECKER_LENGTH_SIZE 4
static inline unsigned int checker_length_read(void) {
	unsigned int r = MMPTR(0xe000a818);
	r <<= 8;
	r |= MMPTR(0xe000a81c);
	r <<= 8;
	r |= MMPTR(0xe000a820);
	r <<= 8;
	r |= MMPTR(0xe000a824);
	return r;
}
static inline void checker_length_write(unsigned int value) {
	MMPTR(0xe000a818) = value >> 24;
	MMPTR(0xe000a81c) = value >> 16;
	MMPTR(0xe000a820) = value >> 8;
	MMPTR(0xe000a824) = value;
}
#define CSR_CHECKER_DONE_ADDR 0xe000a828
#define CSR_CHECKER_DONE_SIZE 1
static inline unsigned char checker_done_read(void) {
	unsigned char r = MMPTR(0xe000a828);
	return r;
}
#define CSR_CHECKER_ERR_COUNT_ADDR 0xe000a82c
#define CSR_CHECKER_ERR_COUNT_SIZE 4
static inline unsigned int checker_err_count_read(void) {
	unsigned int r = MMPTR(0xe000a82c);
	r <<= 8;
	r |= MMPTR(0xe000a830);
	r <<= 8;
	r |= MMPTR(0xe000a834);
	r <<= 8;
	r |= MMPTR(0xe000a838);
	return r;
}

/* ethmac */
#define CSR_ETHMAC_BASE 0xe0009800
#define CSR_ETHMAC_SRAM_WRITER_SLOT_ADDR 0xe0009800
#define CSR_ETHMAC_SRAM_WRITER_SLOT_SIZE 1
static inline unsigned char ethmac_sram_writer_slot_read(void) {
	unsigned char r = MMPTR(0xe0009800);
	return r;
}
#define CSR_ETHMAC_SRAM_WRITER_LENGTH_ADDR 0xe0009804
#define CSR_ETHMAC_SRAM_WRITER_LENGTH_SIZE 4
static inline unsigned int ethmac_sram_writer_length_read(void) {
	unsigned int r = MMPTR(0xe0009804);
	r <<= 8;
	r |= MMPTR(0xe0009808);
	r <<= 8;
	r |= MMPTR(0xe000980c);
	r <<= 8;
	r |= MMPTR(0xe0009810);
	return r;
}
#define CSR_ETHMAC_SRAM_WRITER_EV_STATUS_ADDR 0xe0009814
#define CSR_ETHMAC_SRAM_WRITER_EV_STATUS_SIZE 1
static inline unsigned char ethmac_sram_writer_ev_status_read(void) {
	unsigned char r = MMPTR(0xe0009814);
	return r;
}
static inline void ethmac_sram_writer_ev_status_write(unsigned char value) {
	MMPTR(0xe0009814) = value;
}
#define CSR_ETHMAC_SRAM_WRITER_EV_PENDING_ADDR 0xe0009818
#define CSR_ETHMAC_SRAM_WRITER_EV_PENDING_SIZE 1
static inline unsigned char ethmac_sram_writer_ev_pending_read(void) {
	unsigned char r = MMPTR(0xe0009818);
	return r;
}
static inline void ethmac_sram_writer_ev_pending_write(unsigned char value) {
	MMPTR(0xe0009818) = value;
}
#define CSR_ETHMAC_SRAM_WRITER_EV_ENABLE_ADDR 0xe000981c
#define CSR_ETHMAC_SRAM_WRITER_EV_ENABLE_SIZE 1
static inline unsigned char ethmac_sram_writer_ev_enable_read(void) {
	unsigned char r = MMPTR(0xe000981c);
	return r;
}
static inline void ethmac_sram_writer_ev_enable_write(unsigned char value) {
	MMPTR(0xe000981c) = value;
}
#define CSR_ETHMAC_SRAM_READER_START_ADDR 0xe0009820
#define CSR_ETHMAC_SRAM_READER_START_SIZE 1
static inline unsigned char ethmac_sram_reader_start_read(void) {
	unsigned char r = MMPTR(0xe0009820);
	return r;
}
static inline void ethmac_sram_reader_start_write(unsigned char value) {
	MMPTR(0xe0009820) = value;
}
#define CSR_ETHMAC_SRAM_READER_READY_ADDR 0xe0009824
#define CSR_ETHMAC_SRAM_READER_READY_SIZE 1
static inline unsigned char ethmac_sram_reader_ready_read(void) {
	unsigned char r = MMPTR(0xe0009824);
	return r;
}
#define CSR_ETHMAC_SRAM_READER_SLOT_ADDR 0xe0009828
#define CSR_ETHMAC_SRAM_READER_SLOT_SIZE 1
static inline unsigned char ethmac_sram_reader_slot_read(void) {
	unsigned char r = MMPTR(0xe0009828);
	return r;
}
static inline void ethmac_sram_reader_slot_write(unsigned char value) {
	MMPTR(0xe0009828) = value;
}
#define CSR_ETHMAC_SRAM_READER_LENGTH_ADDR 0xe000982c
#define CSR_ETHMAC_SRAM_READER_LENGTH_SIZE 2
static inline unsigned short int ethmac_sram_reader_length_read(void) {
	unsigned short int r = MMPTR(0xe000982c);
	r <<= 8;
	r |= MMPTR(0xe0009830);
	return r;
}
static inline void ethmac_sram_reader_length_write(unsigned short int value) {
	MMPTR(0xe000982c) = value >> 8;
	MMPTR(0xe0009830) = value;
}
#define CSR_ETHMAC_SRAM_READER_EV_STATUS_ADDR 0xe0009834
#define CSR_ETHMAC_SRAM_READER_EV_STATUS_SIZE 1
static inline unsigned char ethmac_sram_reader_ev_status_read(void) {
	unsigned char r = MMPTR(0xe0009834);
	return r;
}
static inline void ethmac_sram_reader_ev_status_write(unsigned char value) {
	MMPTR(0xe0009834) = value;
}
#define CSR_ETHMAC_SRAM_READER_EV_PENDING_ADDR 0xe0009838
#define CSR_ETHMAC_SRAM_READER_EV_PENDING_SIZE 1
static inline unsigned char ethmac_sram_reader_ev_pending_read(void) {
	unsigned char r = MMPTR(0xe0009838);
	return r;
}
static inline void ethmac_sram_reader_ev_pending_write(unsigned char value) {
	MMPTR(0xe0009838) = value;
}
#define CSR_ETHMAC_SRAM_READER_EV_ENABLE_ADDR 0xe000983c
#define CSR_ETHMAC_SRAM_READER_EV_ENABLE_SIZE 1
static inline unsigned char ethmac_sram_reader_ev_enable_read(void) {
	unsigned char r = MMPTR(0xe000983c);
	return r;
}
static inline void ethmac_sram_reader_ev_enable_write(unsigned char value) {
	MMPTR(0xe000983c) = value;
}
#define CSR_ETHMAC_PREAMBLE_CRC_ADDR 0xe0009840
#define CSR_ETHMAC_PREAMBLE_CRC_SIZE 1
static inline unsigned char ethmac_preamble_crc_read(void) {
	unsigned char r = MMPTR(0xe0009840);
	return r;
}

/* ethphy */
#define CSR_ETHPHY_BASE 0xe0009000
#define CSR_ETHPHY_CRG_RESET_ADDR 0xe0009000
#define CSR_ETHPHY_CRG_RESET_SIZE 1
static inline unsigned char ethphy_crg_reset_read(void) {
	unsigned char r = MMPTR(0xe0009000);
	return r;
}
static inline void ethphy_crg_reset_write(unsigned char value) {
	MMPTR(0xe0009000) = value;
}
#define CSR_ETHPHY_MDIO_W_ADDR 0xe0009004
#define CSR_ETHPHY_MDIO_W_SIZE 1
static inline unsigned char ethphy_mdio_w_read(void) {
	unsigned char r = MMPTR(0xe0009004);
	return r;
}
static inline void ethphy_mdio_w_write(unsigned char value) {
	MMPTR(0xe0009004) = value;
}
#define CSR_ETHPHY_MDIO_R_ADDR 0xe0009008
#define CSR_ETHPHY_MDIO_R_SIZE 1
static inline unsigned char ethphy_mdio_r_read(void) {
	unsigned char r = MMPTR(0xe0009008);
	return r;
}

/* front_panel */
#define CSR_FRONT_PANEL_BASE 0xe0005800
#define CSR_FRONT_PANEL_SWITCHES_IN_ADDR 0xe0005800
#define CSR_FRONT_PANEL_SWITCHES_IN_SIZE 1
static inline unsigned char front_panel_switches_in_read(void) {
	unsigned char r = MMPTR(0xe0005800);
	return r;
}
#define CSR_FRONT_PANEL_LEDS_OUT_ADDR 0xe0005804
#define CSR_FRONT_PANEL_LEDS_OUT_SIZE 1
static inline unsigned char front_panel_leds_out_read(void) {
	unsigned char r = MMPTR(0xe0005804);
	return r;
}
static inline void front_panel_leds_out_write(unsigned char value) {
	MMPTR(0xe0005804) = value;
}

/* generator */
#define CSR_GENERATOR_BASE 0xe000a000
#define CSR_GENERATOR_RESET_ADDR 0xe000a000
#define CSR_GENERATOR_RESET_SIZE 1
static inline unsigned char generator_reset_read(void) {
	unsigned char r = MMPTR(0xe000a000);
	return r;
}
static inline void generator_reset_write(unsigned char value) {
	MMPTR(0xe000a000) = value;
}
#define CSR_GENERATOR_START_ADDR 0xe000a004
#define CSR_GENERATOR_START_SIZE 1
static inline unsigned char generator_start_read(void) {
	unsigned char r = MMPTR(0xe000a004);
	return r;
}
static inline void generator_start_write(unsigned char value) {
	MMPTR(0xe000a004) = value;
}
#define CSR_GENERATOR_DONE_ADDR 0xe000a008
#define CSR_GENERATOR_DONE_SIZE 1
static inline unsigned char generator_done_read(void) {
	unsigned char r = MMPTR(0xe000a008);
	return r;
}
#define CSR_GENERATOR_BASE_ADDR 0xe000a00c
#define CSR_GENERATOR_BASE_SIZE 4
static inline unsigned int generator_base_read(void) {
	unsigned int r = MMPTR(0xe000a00c);
	r <<= 8;
	r |= MMPTR(0xe000a010);
	r <<= 8;
	r |= MMPTR(0xe000a014);
	r <<= 8;
	r |= MMPTR(0xe000a018);
	return r;
}
static inline void generator_base_write(unsigned int value) {
	MMPTR(0xe000a00c) = value >> 24;
	MMPTR(0xe000a010) = value >> 16;
	MMPTR(0xe000a014) = value >> 8;
	MMPTR(0xe000a018) = value;
}
#define CSR_GENERATOR_LENGTH_ADDR 0xe000a01c
#define CSR_GENERATOR_LENGTH_SIZE 4
static inline unsigned int generator_length_read(void) {
	unsigned int r = MMPTR(0xe000a01c);
	r <<= 8;
	r |= MMPTR(0xe000a020);
	r <<= 8;
	r |= MMPTR(0xe000a024);
	r <<= 8;
	r |= MMPTR(0xe000a028);
	return r;
}
static inline void generator_length_write(unsigned int value) {
	MMPTR(0xe000a01c) = value >> 24;
	MMPTR(0xe000a020) = value >> 16;
	MMPTR(0xe000a024) = value >> 8;
	MMPTR(0xe000a028) = value;
}

/* info */
#define CSR_INFO_BASE 0xe0006800
#define CSR_INFO_DNA_ID_ADDR 0xe0006800
#define CSR_INFO_DNA_ID_SIZE 8
static inline unsigned long long int info_dna_id_read(void) {
	unsigned long long int r = MMPTR(0xe0006800);
	r <<= 8;
	r |= MMPTR(0xe0006804);
	r <<= 8;
	r |= MMPTR(0xe0006808);
	r <<= 8;
	r |= MMPTR(0xe000680c);
	r <<= 8;
	r |= MMPTR(0xe0006810);
	r <<= 8;
	r |= MMPTR(0xe0006814);
	r <<= 8;
	r |= MMPTR(0xe0006818);
	r <<= 8;
	r |= MMPTR(0xe000681c);
	return r;
}
#define CSR_INFO_GIT_COMMIT_ADDR 0xe0006820
#define CSR_INFO_GIT_COMMIT_SIZE 20
#define CSR_INFO_PLATFORM_PLATFORM_ADDR 0xe0006870
#define CSR_INFO_PLATFORM_PLATFORM_SIZE 8
static inline unsigned long long int info_platform_platform_read(void) {
	unsigned long long int r = MMPTR(0xe0006870);
	r <<= 8;
	r |= MMPTR(0xe0006874);
	r <<= 8;
	r |= MMPTR(0xe0006878);
	r <<= 8;
	r |= MMPTR(0xe000687c);
	r <<= 8;
	r |= MMPTR(0xe0006880);
	r <<= 8;
	r |= MMPTR(0xe0006884);
	r <<= 8;
	r |= MMPTR(0xe0006888);
	r <<= 8;
	r |= MMPTR(0xe000688c);
	return r;
}
#define CSR_INFO_PLATFORM_TARGET_ADDR 0xe0006890
#define CSR_INFO_PLATFORM_TARGET_SIZE 8
static inline unsigned long long int info_platform_target_read(void) {
	unsigned long long int r = MMPTR(0xe0006890);
	r <<= 8;
	r |= MMPTR(0xe0006894);
	r <<= 8;
	r |= MMPTR(0xe0006898);
	r <<= 8;
	r |= MMPTR(0xe000689c);
	r <<= 8;
	r |= MMPTR(0xe00068a0);
	r <<= 8;
	r |= MMPTR(0xe00068a4);
	r <<= 8;
	r |= MMPTR(0xe00068a8);
	r <<= 8;
	r |= MMPTR(0xe00068ac);
	return r;
}

/* opsis_i2c */
#define CSR_OPSIS_I2C_BASE 0xe0008800
#define CSR_OPSIS_I2C_MASTER_W_ADDR 0xe0008800
#define CSR_OPSIS_I2C_MASTER_W_SIZE 1
static inline unsigned char opsis_i2c_master_w_read(void) {
	unsigned char r = MMPTR(0xe0008800);
	return r;
}
static inline void opsis_i2c_master_w_write(unsigned char value) {
	MMPTR(0xe0008800) = value;
}
#define CSR_OPSIS_I2C_MASTER_R_ADDR 0xe0008804
#define CSR_OPSIS_I2C_MASTER_R_SIZE 1
static inline unsigned char opsis_i2c_master_r_read(void) {
	unsigned char r = MMPTR(0xe0008804);
	return r;
}
#define CSR_OPSIS_I2C_FX2_RESET_OUT_ADDR 0xe0008808
#define CSR_OPSIS_I2C_FX2_RESET_OUT_SIZE 1
static inline unsigned char opsis_i2c_fx2_reset_out_read(void) {
	unsigned char r = MMPTR(0xe0008808);
	return r;
}
static inline void opsis_i2c_fx2_reset_out_write(unsigned char value) {
	MMPTR(0xe0008808) = value;
}
#define CSR_OPSIS_I2C_FX2_HACK_SHIFT_REG_ADDR 0xe000880c
#define CSR_OPSIS_I2C_FX2_HACK_SHIFT_REG_SIZE 1
static inline unsigned char opsis_i2c_fx2_hack_shift_reg_read(void) {
	unsigned char r = MMPTR(0xe000880c);
	return r;
}
static inline void opsis_i2c_fx2_hack_shift_reg_write(unsigned char value) {
	MMPTR(0xe000880c) = value;
}
#define CSR_OPSIS_I2C_FX2_HACK_STATUS_ADDR 0xe0008810
#define CSR_OPSIS_I2C_FX2_HACK_STATUS_SIZE 1
static inline unsigned char opsis_i2c_fx2_hack_status_read(void) {
	unsigned char r = MMPTR(0xe0008810);
	return r;
}
static inline void opsis_i2c_fx2_hack_status_write(unsigned char value) {
	MMPTR(0xe0008810) = value;
}
#define CSR_OPSIS_I2C_FX2_HACK_SLAVE_ADDR_ADDR 0xe0008814
#define CSR_OPSIS_I2C_FX2_HACK_SLAVE_ADDR_SIZE 1
static inline unsigned char opsis_i2c_fx2_hack_slave_addr_read(void) {
	unsigned char r = MMPTR(0xe0008814);
	return r;
}
static inline void opsis_i2c_fx2_hack_slave_addr_write(unsigned char value) {
	MMPTR(0xe0008814) = value;
}
#define CSR_OPSIS_I2C_MUX_SEL_ADDR 0xe0008818
#define CSR_OPSIS_I2C_MUX_SEL_SIZE 1
static inline unsigned char opsis_i2c_mux_sel_read(void) {
	unsigned char r = MMPTR(0xe0008818);
	return r;
}
static inline void opsis_i2c_mux_sel_write(unsigned char value) {
	MMPTR(0xe0008818) = value;
}

/* sdram */
#define CSR_SDRAM_BASE 0xe0004000
#define CSR_SDRAM_DFII_CONTROL_ADDR 0xe0004000
#define CSR_SDRAM_DFII_CONTROL_SIZE 1
static inline unsigned char sdram_dfii_control_read(void) {
	unsigned char r = MMPTR(0xe0004000);
	return r;
}
static inline void sdram_dfii_control_write(unsigned char value) {
	MMPTR(0xe0004000) = value;
}
#define CSR_SDRAM_DFII_PI0_COMMAND_ADDR 0xe0004004
#define CSR_SDRAM_DFII_PI0_COMMAND_SIZE 1
static inline unsigned char sdram_dfii_pi0_command_read(void) {
	unsigned char r = MMPTR(0xe0004004);
	return r;
}
static inline void sdram_dfii_pi0_command_write(unsigned char value) {
	MMPTR(0xe0004004) = value;
}
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_ADDR 0xe0004008
#define CSR_SDRAM_DFII_PI0_COMMAND_ISSUE_SIZE 1
static inline unsigned char sdram_dfii_pi0_command_issue_read(void) {
	unsigned char r = MMPTR(0xe0004008);
	return r;
}
static inline void sdram_dfii_pi0_command_issue_write(unsigned char value) {
	MMPTR(0xe0004008) = value;
}
#define CSR_SDRAM_DFII_PI0_ADDRESS_ADDR 0xe000400c
#define CSR_SDRAM_DFII_PI0_ADDRESS_SIZE 2
static inline unsigned short int sdram_dfii_pi0_address_read(void) {
	unsigned short int r = MMPTR(0xe000400c);
	r <<= 8;
	r |= MMPTR(0xe0004010);
	return r;
}
static inline void sdram_dfii_pi0_address_write(unsigned short int value) {
	MMPTR(0xe000400c) = value >> 8;
	MMPTR(0xe0004010) = value;
}
#define CSR_SDRAM_DFII_PI0_BADDRESS_ADDR 0xe0004014
#define CSR_SDRAM_DFII_PI0_BADDRESS_SIZE 1
static inline unsigned char sdram_dfii_pi0_baddress_read(void) {
	unsigned char r = MMPTR(0xe0004014);
	return r;
}
static inline void sdram_dfii_pi0_baddress_write(unsigned char value) {
	MMPTR(0xe0004014) = value;
}
#define CSR_SDRAM_DFII_PI0_WRDATA_ADDR 0xe0004018
#define CSR_SDRAM_DFII_PI0_WRDATA_SIZE 4
static inline unsigned int sdram_dfii_pi0_wrdata_read(void) {
	unsigned int r = MMPTR(0xe0004018);
	r <<= 8;
	r |= MMPTR(0xe000401c);
	r <<= 8;
	r |= MMPTR(0xe0004020);
	r <<= 8;
	r |= MMPTR(0xe0004024);
	return r;
}
static inline void sdram_dfii_pi0_wrdata_write(unsigned int value) {
	MMPTR(0xe0004018) = value >> 24;
	MMPTR(0xe000401c) = value >> 16;
	MMPTR(0xe0004020) = value >> 8;
	MMPTR(0xe0004024) = value;
}
#define CSR_SDRAM_DFII_PI0_RDDATA_ADDR 0xe0004028
#define CSR_SDRAM_DFII_PI0_RDDATA_SIZE 4
static inline unsigned int sdram_dfii_pi0_rddata_read(void) {
	unsigned int r = MMPTR(0xe0004028);
	r <<= 8;
	r |= MMPTR(0xe000402c);
	r <<= 8;
	r |= MMPTR(0xe0004030);
	r <<= 8;
	r |= MMPTR(0xe0004034);
	return r;
}
#define CSR_SDRAM_DFII_PI1_COMMAND_ADDR 0xe0004038
#define CSR_SDRAM_DFII_PI1_COMMAND_SIZE 1
static inline unsigned char sdram_dfii_pi1_command_read(void) {
	unsigned char r = MMPTR(0xe0004038);
	return r;
}
static inline void sdram_dfii_pi1_command_write(unsigned char value) {
	MMPTR(0xe0004038) = value;
}
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_ADDR 0xe000403c
#define CSR_SDRAM_DFII_PI1_COMMAND_ISSUE_SIZE 1
static inline unsigned char sdram_dfii_pi1_command_issue_read(void) {
	unsigned char r = MMPTR(0xe000403c);
	return r;
}
static inline void sdram_dfii_pi1_command_issue_write(unsigned char value) {
	MMPTR(0xe000403c) = value;
}
#define CSR_SDRAM_DFII_PI1_ADDRESS_ADDR 0xe0004040
#define CSR_SDRAM_DFII_PI1_ADDRESS_SIZE 2
static inline unsigned short int sdram_dfii_pi1_address_read(void) {
	unsigned short int r = MMPTR(0xe0004040);
	r <<= 8;
	r |= MMPTR(0xe0004044);
	return r;
}
static inline void sdram_dfii_pi1_address_write(unsigned short int value) {
	MMPTR(0xe0004040) = value >> 8;
	MMPTR(0xe0004044) = value;
}
#define CSR_SDRAM_DFII_PI1_BADDRESS_ADDR 0xe0004048
#define CSR_SDRAM_DFII_PI1_BADDRESS_SIZE 1
static inline unsigned char sdram_dfii_pi1_baddress_read(void) {
	unsigned char r = MMPTR(0xe0004048);
	return r;
}
static inline void sdram_dfii_pi1_baddress_write(unsigned char value) {
	MMPTR(0xe0004048) = value;
}
#define CSR_SDRAM_DFII_PI1_WRDATA_ADDR 0xe000404c
#define CSR_SDRAM_DFII_PI1_WRDATA_SIZE 4
static inline unsigned int sdram_dfii_pi1_wrdata_read(void) {
	unsigned int r = MMPTR(0xe000404c);
	r <<= 8;
	r |= MMPTR(0xe0004050);
	r <<= 8;
	r |= MMPTR(0xe0004054);
	r <<= 8;
	r |= MMPTR(0xe0004058);
	return r;
}
static inline void sdram_dfii_pi1_wrdata_write(unsigned int value) {
	MMPTR(0xe000404c) = value >> 24;
	MMPTR(0xe0004050) = value >> 16;
	MMPTR(0xe0004054) = value >> 8;
	MMPTR(0xe0004058) = value;
}
#define CSR_SDRAM_DFII_PI1_RDDATA_ADDR 0xe000405c
#define CSR_SDRAM_DFII_PI1_RDDATA_SIZE 4
static inline unsigned int sdram_dfii_pi1_rddata_read(void) {
	unsigned int r = MMPTR(0xe000405c);
	r <<= 8;
	r |= MMPTR(0xe0004060);
	r <<= 8;
	r |= MMPTR(0xe0004064);
	r <<= 8;
	r |= MMPTR(0xe0004068);
	return r;
}
#define CSR_SDRAM_DFII_PI2_COMMAND_ADDR 0xe000406c
#define CSR_SDRAM_DFII_PI2_COMMAND_SIZE 1
static inline unsigned char sdram_dfii_pi2_command_read(void) {
	unsigned char r = MMPTR(0xe000406c);
	return r;
}
static inline void sdram_dfii_pi2_command_write(unsigned char value) {
	MMPTR(0xe000406c) = value;
}
#define CSR_SDRAM_DFII_PI2_COMMAND_ISSUE_ADDR 0xe0004070
#define CSR_SDRAM_DFII_PI2_COMMAND_ISSUE_SIZE 1
static inline unsigned char sdram_dfii_pi2_command_issue_read(void) {
	unsigned char r = MMPTR(0xe0004070);
	return r;
}
static inline void sdram_dfii_pi2_command_issue_write(unsigned char value) {
	MMPTR(0xe0004070) = value;
}
#define CSR_SDRAM_DFII_PI2_ADDRESS_ADDR 0xe0004074
#define CSR_SDRAM_DFII_PI2_ADDRESS_SIZE 2
static inline unsigned short int sdram_dfii_pi2_address_read(void) {
	unsigned short int r = MMPTR(0xe0004074);
	r <<= 8;
	r |= MMPTR(0xe0004078);
	return r;
}
static inline void sdram_dfii_pi2_address_write(unsigned short int value) {
	MMPTR(0xe0004074) = value >> 8;
	MMPTR(0xe0004078) = value;
}
#define CSR_SDRAM_DFII_PI2_BADDRESS_ADDR 0xe000407c
#define CSR_SDRAM_DFII_PI2_BADDRESS_SIZE 1
static inline unsigned char sdram_dfii_pi2_baddress_read(void) {
	unsigned char r = MMPTR(0xe000407c);
	return r;
}
static inline void sdram_dfii_pi2_baddress_write(unsigned char value) {
	MMPTR(0xe000407c) = value;
}
#define CSR_SDRAM_DFII_PI2_WRDATA_ADDR 0xe0004080
#define CSR_SDRAM_DFII_PI2_WRDATA_SIZE 4
static inline unsigned int sdram_dfii_pi2_wrdata_read(void) {
	unsigned int r = MMPTR(0xe0004080);
	r <<= 8;
	r |= MMPTR(0xe0004084);
	r <<= 8;
	r |= MMPTR(0xe0004088);
	r <<= 8;
	r |= MMPTR(0xe000408c);
	return r;
}
static inline void sdram_dfii_pi2_wrdata_write(unsigned int value) {
	MMPTR(0xe0004080) = value >> 24;
	MMPTR(0xe0004084) = value >> 16;
	MMPTR(0xe0004088) = value >> 8;
	MMPTR(0xe000408c) = value;
}
#define CSR_SDRAM_DFII_PI2_RDDATA_ADDR 0xe0004090
#define CSR_SDRAM_DFII_PI2_RDDATA_SIZE 4
static inline unsigned int sdram_dfii_pi2_rddata_read(void) {
	unsigned int r = MMPTR(0xe0004090);
	r <<= 8;
	r |= MMPTR(0xe0004094);
	r <<= 8;
	r |= MMPTR(0xe0004098);
	r <<= 8;
	r |= MMPTR(0xe000409c);
	return r;
}
#define CSR_SDRAM_DFII_PI3_COMMAND_ADDR 0xe00040a0
#define CSR_SDRAM_DFII_PI3_COMMAND_SIZE 1
static inline unsigned char sdram_dfii_pi3_command_read(void) {
	unsigned char r = MMPTR(0xe00040a0);
	return r;
}
static inline void sdram_dfii_pi3_command_write(unsigned char value) {
	MMPTR(0xe00040a0) = value;
}
#define CSR_SDRAM_DFII_PI3_COMMAND_ISSUE_ADDR 0xe00040a4
#define CSR_SDRAM_DFII_PI3_COMMAND_ISSUE_SIZE 1
static inline unsigned char sdram_dfii_pi3_command_issue_read(void) {
	unsigned char r = MMPTR(0xe00040a4);
	return r;
}
static inline void sdram_dfii_pi3_command_issue_write(unsigned char value) {
	MMPTR(0xe00040a4) = value;
}
#define CSR_SDRAM_DFII_PI3_ADDRESS_ADDR 0xe00040a8
#define CSR_SDRAM_DFII_PI3_ADDRESS_SIZE 2
static inline unsigned short int sdram_dfii_pi3_address_read(void) {
	unsigned short int r = MMPTR(0xe00040a8);
	r <<= 8;
	r |= MMPTR(0xe00040ac);
	return r;
}
static inline void sdram_dfii_pi3_address_write(unsigned short int value) {
	MMPTR(0xe00040a8) = value >> 8;
	MMPTR(0xe00040ac) = value;
}
#define CSR_SDRAM_DFII_PI3_BADDRESS_ADDR 0xe00040b0
#define CSR_SDRAM_DFII_PI3_BADDRESS_SIZE 1
static inline unsigned char sdram_dfii_pi3_baddress_read(void) {
	unsigned char r = MMPTR(0xe00040b0);
	return r;
}
static inline void sdram_dfii_pi3_baddress_write(unsigned char value) {
	MMPTR(0xe00040b0) = value;
}
#define CSR_SDRAM_DFII_PI3_WRDATA_ADDR 0xe00040b4
#define CSR_SDRAM_DFII_PI3_WRDATA_SIZE 4
static inline unsigned int sdram_dfii_pi3_wrdata_read(void) {
	unsigned int r = MMPTR(0xe00040b4);
	r <<= 8;
	r |= MMPTR(0xe00040b8);
	r <<= 8;
	r |= MMPTR(0xe00040bc);
	r <<= 8;
	r |= MMPTR(0xe00040c0);
	return r;
}
static inline void sdram_dfii_pi3_wrdata_write(unsigned int value) {
	MMPTR(0xe00040b4) = value >> 24;
	MMPTR(0xe00040b8) = value >> 16;
	MMPTR(0xe00040bc) = value >> 8;
	MMPTR(0xe00040c0) = value;
}
#define CSR_SDRAM_DFII_PI3_RDDATA_ADDR 0xe00040c4
#define CSR_SDRAM_DFII_PI3_RDDATA_SIZE 4
static inline unsigned int sdram_dfii_pi3_rddata_read(void) {
	unsigned int r = MMPTR(0xe00040c4);
	r <<= 8;
	r |= MMPTR(0xe00040c8);
	r <<= 8;
	r |= MMPTR(0xe00040cc);
	r <<= 8;
	r |= MMPTR(0xe00040d0);
	return r;
}
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_UPDATE_ADDR 0xe00040d4
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_UPDATE_SIZE 1
static inline unsigned char sdram_controller_bandwidth_update_read(void) {
	unsigned char r = MMPTR(0xe00040d4);
	return r;
}
static inline void sdram_controller_bandwidth_update_write(unsigned char value) {
	MMPTR(0xe00040d4) = value;
}
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_NREADS_ADDR 0xe00040d8
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_NREADS_SIZE 3
static inline unsigned int sdram_controller_bandwidth_nreads_read(void) {
	unsigned int r = MMPTR(0xe00040d8);
	r <<= 8;
	r |= MMPTR(0xe00040dc);
	r <<= 8;
	r |= MMPTR(0xe00040e0);
	return r;
}
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_NWRITES_ADDR 0xe00040e4
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_NWRITES_SIZE 3
static inline unsigned int sdram_controller_bandwidth_nwrites_read(void) {
	unsigned int r = MMPTR(0xe00040e4);
	r <<= 8;
	r |= MMPTR(0xe00040e8);
	r <<= 8;
	r |= MMPTR(0xe00040ec);
	return r;
}
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_DATA_WIDTH_ADDR 0xe00040f0
#define CSR_SDRAM_CONTROLLER_BANDWIDTH_DATA_WIDTH_SIZE 1
static inline unsigned char sdram_controller_bandwidth_data_width_read(void) {
	unsigned char r = MMPTR(0xe00040f0);
	return r;
}

/* timer0 */
#define CSR_TIMER0_BASE 0xe0002000
#define CSR_TIMER0_LOAD_ADDR 0xe0002000
#define CSR_TIMER0_LOAD_SIZE 4
static inline unsigned int timer0_load_read(void) {
	unsigned int r = MMPTR(0xe0002000);
	r <<= 8;
	r |= MMPTR(0xe0002004);
	r <<= 8;
	r |= MMPTR(0xe0002008);
	r <<= 8;
	r |= MMPTR(0xe000200c);
	return r;
}
static inline void timer0_load_write(unsigned int value) {
	MMPTR(0xe0002000) = value >> 24;
	MMPTR(0xe0002004) = value >> 16;
	MMPTR(0xe0002008) = value >> 8;
	MMPTR(0xe000200c) = value;
}
#define CSR_TIMER0_RELOAD_ADDR 0xe0002010
#define CSR_TIMER0_RELOAD_SIZE 4
static inline unsigned int timer0_reload_read(void) {
	unsigned int r = MMPTR(0xe0002010);
	r <<= 8;
	r |= MMPTR(0xe0002014);
	r <<= 8;
	r |= MMPTR(0xe0002018);
	r <<= 8;
	r |= MMPTR(0xe000201c);
	return r;
}
static inline void timer0_reload_write(unsigned int value) {
	MMPTR(0xe0002010) = value >> 24;
	MMPTR(0xe0002014) = value >> 16;
	MMPTR(0xe0002018) = value >> 8;
	MMPTR(0xe000201c) = value;
}
#define CSR_TIMER0_EN_ADDR 0xe0002020
#define CSR_TIMER0_EN_SIZE 1
static inline unsigned char timer0_en_read(void) {
	unsigned char r = MMPTR(0xe0002020);
	return r;
}
static inline void timer0_en_write(unsigned char value) {
	MMPTR(0xe0002020) = value;
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR 0xe0002024
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline unsigned char timer0_update_value_read(void) {
	unsigned char r = MMPTR(0xe0002024);
	return r;
}
static inline void timer0_update_value_write(unsigned char value) {
	MMPTR(0xe0002024) = value;
}
#define CSR_TIMER0_VALUE_ADDR 0xe0002028
#define CSR_TIMER0_VALUE_SIZE 4
static inline unsigned int timer0_value_read(void) {
	unsigned int r = MMPTR(0xe0002028);
	r <<= 8;
	r |= MMPTR(0xe000202c);
	r <<= 8;
	r |= MMPTR(0xe0002030);
	r <<= 8;
	r |= MMPTR(0xe0002034);
	return r;
}
#define CSR_TIMER0_EV_STATUS_ADDR 0xe0002038
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline unsigned char timer0_ev_status_read(void) {
	unsigned char r = MMPTR(0xe0002038);
	return r;
}
static inline void timer0_ev_status_write(unsigned char value) {
	MMPTR(0xe0002038) = value;
}
#define CSR_TIMER0_EV_PENDING_ADDR 0xe000203c
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline unsigned char timer0_ev_pending_read(void) {
	unsigned char r = MMPTR(0xe000203c);
	return r;
}
static inline void timer0_ev_pending_write(unsigned char value) {
	MMPTR(0xe000203c) = value;
}
#define CSR_TIMER0_EV_ENABLE_ADDR 0xe0002040
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline unsigned char timer0_ev_enable_read(void) {
	unsigned char r = MMPTR(0xe0002040);
	return r;
}
static inline void timer0_ev_enable_write(unsigned char value) {
	MMPTR(0xe0002040) = value;
}

/* uart */
#define CSR_UART_BASE 0xe0001000
#define CSR_UART_RXTX_ADDR 0xe0001000
#define CSR_UART_RXTX_SIZE 1
static inline unsigned char uart_rxtx_read(void) {
	unsigned char r = MMPTR(0xe0001000);
	return r;
}
static inline void uart_rxtx_write(unsigned char value) {
	MMPTR(0xe0001000) = value;
}
#define CSR_UART_TXFULL_ADDR 0xe0001004
#define CSR_UART_TXFULL_SIZE 1
static inline unsigned char uart_txfull_read(void) {
	unsigned char r = MMPTR(0xe0001004);
	return r;
}
#define CSR_UART_RXEMPTY_ADDR 0xe0001008
#define CSR_UART_RXEMPTY_SIZE 1
static inline unsigned char uart_rxempty_read(void) {
	unsigned char r = MMPTR(0xe0001008);
	return r;
}
#define CSR_UART_EV_STATUS_ADDR 0xe000100c
#define CSR_UART_EV_STATUS_SIZE 1
static inline unsigned char uart_ev_status_read(void) {
	unsigned char r = MMPTR(0xe000100c);
	return r;
}
static inline void uart_ev_status_write(unsigned char value) {
	MMPTR(0xe000100c) = value;
}
#define CSR_UART_EV_PENDING_ADDR 0xe0001010
#define CSR_UART_EV_PENDING_SIZE 1
static inline unsigned char uart_ev_pending_read(void) {
	unsigned char r = MMPTR(0xe0001010);
	return r;
}
static inline void uart_ev_pending_write(unsigned char value) {
	MMPTR(0xe0001010) = value;
}
#define CSR_UART_EV_ENABLE_ADDR 0xe0001014
#define CSR_UART_EV_ENABLE_SIZE 1
static inline unsigned char uart_ev_enable_read(void) {
	unsigned char r = MMPTR(0xe0001014);
	return r;
}
static inline void uart_ev_enable_write(unsigned char value) {
	MMPTR(0xe0001014) = value;
}

/* constants */
#define UART_INTERRUPT 0
static inline int uart_interrupt_read(void) {
	return 0;
}
#define TIMER0_INTERRUPT 1
static inline int timer0_interrupt_read(void) {
	return 1;
}
#define ETHMAC_INTERRUPT 2
static inline int ethmac_interrupt_read(void) {
	return 2;
}
#define CSR_DATA_WIDTH 8
static inline int csr_data_width_read(void) {
	return 8;
}
#define SYSTEM_CLOCK_FREQUENCY 50000000
static inline int system_clock_frequency_read(void) {
	return 50000000;
}
#define SPIFLASH_PAGE_SIZE 256
static inline int spiflash_page_size_read(void) {
	return 256;
}
#define SPIFLASH_SECTOR_SIZE 65536
static inline int spiflash_sector_size_read(void) {
	return 65536;
}
#define L2_SIZE 8192
static inline int l2_size_read(void) {
	return 8192;
}
#define LOCALIP1 192
static inline int localip1_read(void) {
	return 192;
}
#define LOCALIP2 168
static inline int localip2_read(void) {
	return 168;
}
#define LOCALIP3 100
static inline int localip3_read(void) {
	return 100;
}
#define LOCALIP4 50
static inline int localip4_read(void) {
	return 50;
}
#define REMOTEIP1 192
static inline int remoteip1_read(void) {
	return 192;
}
#define REMOTEIP2 168
static inline int remoteip2_read(void) {
	return 168;
}
#define REMOTEIP3 100
static inline int remoteip3_read(void) {
	return 100;
}
#define REMOTEIP4 100
static inline int remoteip4_read(void) {
	return 100;
}
#define CONFIG_CLOCK_FREQUENCY 50000000
static inline int config_clock_frequency_read(void) {
	return 50000000;
}
#define CONFIG_CPU_RESET_ADDR 0
static inline int config_cpu_reset_addr_read(void) {
	return 0;
}
#define CONFIG_CPU_TYPE "LM32"
static inline const char * config_cpu_type_read(void) {
	return "LM32";
}
#define CONFIG_CSR_DATA_WIDTH 8
static inline int config_csr_data_width_read(void) {
	return 8;
}

#endif
