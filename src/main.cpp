// MQTT test
// Copyright © 2024 Alberto Oporto
//
// mosquito is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// mosquito is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with mosquito.  If not, see <http://www.gnu.org/licenses/>.

#include <iostream>
#include <mosquittopp.h>

int main()
{
	mosqpp::mosquittopp mq;

	mq.connect("1.2.3.4");

	return 0;
}
