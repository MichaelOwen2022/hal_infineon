# Copyright (c) 2022 Cypress Semiconductor Corporation.
#
# SPDX-License-Identifier: Apache-2.0

# Add whd-bsp-integration sources
zephyr_include_directories(.)
zephyr_library_sources(cybsp_wifi.c)
