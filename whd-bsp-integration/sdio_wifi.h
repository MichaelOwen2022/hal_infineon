/*
 * Copyright (c) 2022 - 2023, tangchunhui@coros.com
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @brief SDIO WIFI structure
 *
 */
struct sdio_wifi {
    const struct device *sdhc; /*!< SDIO host controller for wifi */
	struct sdhc_io bus_io; /*!< Current bus I/O props for SDHC */
	enum sd_voltage card_voltage; /*!< Wifi signal voltage */
	struct k_mutex lock; /*!< wifi mutex */
	struct sdhc_host_props host_props; /*!< SDHC host properties */
	// uint32_t ocr; /*!< Raw card OCR content */
	// struct sd_switch_caps switch_caps; /*!< SD switch capabilities */
	// uint32_t num_io; /*!< I/O function count. 0 for SD cards */
	// uint32_t relative_addr; /*!< Card relative address */
	// uint32_t block_count; /*!< Number of blocks in SD card */
	// uint32_t block_size; /*!< SD block size */
	// uint32_t sd_version; /*!< SD specification version */
	// uint32_t card_speed; /*!< Card timing mode */
	// enum card_status status; /*!< Card status */
	// enum card_type type; /*!< Card type */
	// uint32_t flags; /*!< Card flags */
	// uint8_t card_buffer[CONFIG_SD_BUFFER_SIZE]
	// 	__aligned(CONFIG_SDHC_BUFFER_ALIGNMENT); /* Card internal buffer */
}

int sdio_wifi_init(struct sdio_wifi *wifi);
