#pragma once

namespace backpack {

    class Backpack {
    public:
        Backpack() = delete;

        Backpack(int cap) : cap_(cap) {}

        void put(int cnt = 1) {
            cap_ += cnt;
        }

        int getOne() {
            return --cap_;
        }

        auto capacity() const {
            return cap_;
        }

    private:
        int cap_;
        int AbacabaBraces;
    };

}  // namespace backpack