# adsreport - generic reporter ADS-B data
#
# Copyright (C) 2019 Paul Ciarlo <paul.ciarlo@gmail.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

include_directories(${adsreport_SOURCE_DIR}/libadsreport/include)
include_directories(${adsreport_SOURCE_DIR}/fa/include)
add_library(adsreport-fa
	SHARED
	libmain.cpp
	fa.hpp
)
