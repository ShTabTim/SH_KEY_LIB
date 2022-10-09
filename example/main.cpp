#include <iostream>
#include <sh_key.h>

int32_t main() {
	int32_t new_x(0), new_y(0), old_x(0), old_y(0);
	while (!shks::get_key(VK_ESCAPE).pressed) {
		shks::update(NULL);
		new_x = shks::get_x();
		new_y = shks::get_y();
		if (new_x != old_x || new_y != old_y) {
			std::cout << "x : " << shks::get_x() << ", y : " << shks::get_y() << "\n";
			old_x = new_x;
			old_y = new_y;
		}
	}
	return 0;
}