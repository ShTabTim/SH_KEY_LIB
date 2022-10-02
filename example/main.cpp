#include <iostream>
#include <sh_key.h>

int32_t main() {
	int32_t new_x(0), new_y(0), old_x(0), old_y(0);
	while (!keys::get_key(VK_ESCAPE).pressed) {
		keys::update(NULL);
		new_x = keys::get_x();
		new_y = keys::get_y();
		if (new_x != old_x || new_y != old_y) {
			std::cout << "x : " << keys::get_x() << ", y : " << keys::get_y() << "\n";
			old_x = new_x;
			old_y = new_y;
		}
	}
	return 0;
}