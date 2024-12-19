#include <filesystem>
#include <iostream>

int main() {
  std::cout << "Welcome to Diskscope" << std::endl;

  std::filesystem::path cwd = std::filesystem::current_path();

  std::cout << "Current working directory: " << cwd << std::endl;

  std::filesystem::space_info si = std::filesystem::space(cwd);

  std::cout << "Capacity: " << si.capacity << std::endl;
  std::cout << "Free: " << si.free << std::endl;
  std::cout << "Available: " << si.available << std::endl;

  return 0;
}
