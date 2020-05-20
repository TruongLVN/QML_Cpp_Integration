template <size_t buffer_size>
struct buffer {
    uint8_t byte[buffer_size];

    buffer() : byte{0} {}

    buffer(uint8_t* buff) {
        memcpy(byte, buff, buffer_size);
    }

    template <typename... T>
    buffer(T... bytes)
        : byte{static_cast<uint8_t>(bytes)...}
    {}

    operator uint8_t*() {
        return byte;
    }

    constexpr size_t size() const {
        return buffer_size;
    }

    buffer<buffer_size>& operator=(const uint8_t* rhs) {
        memcpy(byte, rhs, buffer_size);
        return (*this);
    }
};