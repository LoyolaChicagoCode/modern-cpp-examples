add_executable(cli11-mva cli11-mva.cpp)
target_link_libraries(cli11-mva fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(auto-mva auto-mva.cpp)
target_link_libraries(auto-mva fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(auto-with-stl auto-with-stl.cpp)
target_link_libraries(auto-with-stl fmt::fmt spdlog::spdlog CLI11::CLI11)

#add_executable(const-constexpr const-constexpr.cpp)
#target_link_libraries(const-constexpr fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(mc-triangle mc-triangle.cpp)
target_link_libraries(mc-triangle fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(mc-triangle-threads mc-triangle-threads.cpp)
target_link_libraries(mc-triangle-threads fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(move-mvp move-mvp.cpp)
target_link_libraries(move-mvp fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(point_demo point_demo.cpp)
target_link_libraries(point_demo fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(random-hist random-hist.cpp)
target_link_libraries(random-hist fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(range1 range1.cpp)
target_link_libraries(range1 fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(range2 range2.cpp)
target_link_libraries(range2 fmt::fmt spdlog::spdlog CLI11::CLI11)

#add_executable(sleep-coroutine sleep-coroutine.cpp)
#target_link_libraries(sleep-coroutine fmt::fmt spdlog::spdlog CLI11::CLI11)

add_executable(weak_ptr weak_ptr.cpp)
target_link_libraries(weak_ptr fmt::fmt spdlog::spdlog CLI11::CLI11)
