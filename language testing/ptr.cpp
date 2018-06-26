#include <memory>
int main() {
    auto p = std::make_unique<int>(42);
    return 0;
}