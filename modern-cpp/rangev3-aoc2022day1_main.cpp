#include "rangev3-aoc2022day1.hpp"

#include <iostream>
#include <utility>
#include <vector>

#include <range/v3/view.hpp>
#include <range/v3/algorithm.hpp>
#include <range/v3/iterator.hpp>
#include <range/v3/numeric.hpp>
#include <range/v3/action.hpp>

using namespace ranges;

// to use, redirect stdin from data/day1input.txt
int main() {
  // read lines into vector
  std::vector<int> data;
  copy(
    getlines(std::cin) 
    | views::transform(
        [](auto const& s) { return s.empty() ? 0 : std::stoi(s); }
      ),
    back_inserter(data)
  );

  copy(data, std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;

  auto result = most_nutritious_inventories(data, 3);

  std::cout << "Day 1 part 1 (max) = " << result.first << "\n";
  std::cout << "Day 1 part 2 (sum) = " << result.second << "\n";
}
