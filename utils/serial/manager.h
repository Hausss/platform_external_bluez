/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2004-2008  Marcel Holtmann <marcel@holtmann.org>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#define SERIAL_MANAGER_PATH		"/org/bluez/serial"
#define SERIAL_MANAGER_INTERFACE	"org.bluez.serial.Manager"

int serial_manager_init(DBusConnection *conn);
void serial_manager_exit(void);
int rfcomm_release(int16_t id);

DBusMessage *service_connect(DBusConnection *conn, DBusMessage *msg,
						const char *adapter,
						const char *address,
						const char *pattern);
