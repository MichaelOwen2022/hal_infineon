### Zephyr hal module for an Infineon devices

This modules includes the Infineon Assets (PDL, HAL, etc), which are used in
implementation of Zephyr drivers for Infineon devices.


## What's Included?

The Zephyr hal module for an Infineon devices uses below assets:

- abstraction-rtos - the RTOS abstraction layer provides simple RTOS services
like threads, semaphores, mutexes, queues, and timers. It is not intended to be
a full features RTOS interface, but the provide just enough support to allow for
RTOS independent drivers and middleware. This allows middleware applications to
be as portable as possible within ModusToolbox™. This library provides a unified
API around the actual RTOS. This allows middleware libraries to be written once
independent of the RTOS actually selected for the application. The abstraction
layer provides access to all the standard RTOS resources listed in the feature
section below.

- core-lib - the Core Library provides basic types and utilities that can be used
between different devices. This allows different libraries to share common items
between themselves to avoid reimplementation and promote consistency.

- mtb-hal-cat1 - the Hardware Abstraction Layer (HAL) provides a high-level
interface to configure and use hardware blocks on ModusToolbox™ MCUs. It is a
generic interface that can be used across multiple product families. The focus
on ease-of-use and portability means the HAL does not expose all of the low-level
peripheral functionality. The HAL can be combined with platform-specific libraries
(such as the PSoC™ 4/6 Peripheral Driver Library (PDL)) within a single
application.

- mtb-pdl-cat1 - MTB CAT1 PDL provides low level device drivers for CAT1A family
of devices which are also known as PSOC6 family of devices. Any reference to CAT1A
devices refers to PSOC6 devices and vice versa. The PDL integrates device header
files, startup code, and peripheral drivers into a single package. The PDL supports
the PSoC 6 device family.

- whd-bsp-integration - This library provides some convenience functions for
connecting the WiFi Host Driver (WHD) library to a Board Support Package (BSP)
that includes a WLAN chip. This library initializes the hardware and passes a
reference to the communication interface on the board into WHD.

- XMCLib - The XMC Peripheral Library (XMCLib) consists of low-level drivers for
the XMC product family peripherals.


## Asset versions

|  Asset               | Version |
| ---------------------| ------- |
| abstraction-rtos     |  1.5.0  |
| core-lib             |  1.3.0  |
| mtb-hal-cat1         |  2.0.0  |
| mtb-pdl-cat1         |  2.3.0  |
| whd-bsp-integration  |  2.0.0  |
| XMCLib               |  2.1.24 |


© Cypress Semiconductor Corporation, 2022.