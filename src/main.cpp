#include <iostream>

#include "store.h"

int main() {
    Store store;

    store.put("name", "alex");
    store.put("language", "cpp");

    auto name = store.get("name");

    if (name.has_value()) {
        std::cout << "name = " << name.value() << '\n';
    } else {
        std::cout << "name not found\n";
    }

    std::cout << "Store size: " << store.size() << '\n';

    store.remove("name");

    if (!store.exists("name")) {
        std::cout << "name was removed\n";
    }

    return 0;
}