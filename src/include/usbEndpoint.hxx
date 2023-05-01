// SPDX-License-Identifier: BSD-3-Clause
// SPDX-FileCopyrightText: 2023 1BitSquared <info@1bitsquared.com>
// SPDX-FileContributor: Written by Rachel Mant <git@dragonmux.network>
#ifndef USB_ENDPOINT_HXX
#define USB_ENDPOINT_HXX

#include <libusb.h>

struct usbEndpoint_t final
{
private:
	const libusb_endpoint_descriptor *endpoint{nullptr};

public:
	usbEndpoint_t() noexcept = default;
	usbEndpoint_t(const libusb_endpoint_descriptor *const endpoint_) noexcept : endpoint{endpoint_} { }

	[[nodiscard]] bool valid() const noexcept { return endpoint; }
};

#endif /*USB_ENDPOINT_HXX*/
