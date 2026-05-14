#ifndef STORE_H
#define STORE_H

#include <optional>
#include <string>
#include <unordered_map>

class Store {
public:
    void put(const std::string& key, const std::string& value);

    std::optional<std::string> get(const std::string& key) const;

    bool remove(const std::string& key);

    bool exists(const std::string& key) const;

    std::size_t size() const;

private:
    std::unordered_map<std::string, std::string> data_;
};

#endif