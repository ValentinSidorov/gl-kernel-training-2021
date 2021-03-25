// SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause

#ifndef _DS3231_REGMAP_H_
#define _DS3231_REGMAP_H_

#define DS3231_SECONDS			0x00
#define DS3231_MINUTES			0x01

#define DS3231_HOURS				0x02
#define DS3231_HOURS24_MASK			0x3F
#define DS3231_HOURS12_MASK			0x1F
#define DS3231_HOURS12_AMPM_MASK		0x20
#define DS3231_HOURS_1224_MASK		0x40

#define DS3231_WDAY				0x03
#define DS3231_MDAY				0x04

#define DS3231_MONTH_CENTURY			0x05
#define DS3231_MONTH_MASK			0x1F
#define DS3231_CENTURY_MASK			0x80

#define DS3231_YEAR				0x06
/*_DS3231_REGMAP_H_*/
#endif

