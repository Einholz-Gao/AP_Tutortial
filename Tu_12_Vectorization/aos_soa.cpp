#include <chrono>
#include <iostream>
#include <random>
#include <string>
#include <vector>

// Every baby born is given a name and has a weight and height
class Baby {
public:
  Baby(std::string Name, float Weight, float Height) {
    name = Name;
    weight = Weight;
    height = Height;
  }
  std::string name;
  float weight;
  float height;
  // TODO: Add an additional characteristic (e.g. cuteness) and take the average
  // (both in AoS and SoA)
};

// We can store our dataset as an array of structures (objects):
// We have an array of babies, each with some data.
class AoS {
public:
  void add(const Baby &baby) { Babies.push_back(baby); }

  std::vector<Baby> Babies;
};

// ...or we can store our dataset as a structure (object) of arrays:
// We have an object with an array of names, an array of weights, and an array
// of heights
class SoA {
public:
  void add(const Baby &baby) {
    names.push_back(baby.name);
    weights.push_back(baby.weight);
    heights.push_back(baby.height);
  }

  std::vector<std::string> names;
  std::vector<float> weights;
  std::vector<float> heights;
};

int main() {

  size_t dataset_size = 20'000'000;
  std::cout << "Dataset size: " << dataset_size << std::endl;
  AoS dataset_AoS;
  SoA dataset_SoA;

  // Timers
  std::chrono::time_point<std::chrono::system_clock> start;
  std::chrono::time_point<std::chrono::system_clock> end;

  // Generate some random dataset (normally we would read this from a file /
  // database)
  start = std::chrono::system_clock::now();
  std::default_random_engine generator;
  std::uniform_int_distribution<int> weight_distribution(2, 5);
  std::uniform_int_distribution<int> height_distribution(40, 60);
  for (auto i = 0; i < dataset_size; ++i) {
    int random_weight = weight_distribution(generator);
    int random_height = height_distribution(generator);
    Baby new_baby = Baby("Alice", random_weight, random_height);
    dataset_AoS.add(new_baby);
    dataset_SoA.add(new_baby);
  }
  end = std::chrono::system_clock::now();
  auto time_to_setup =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "Time to setup: " << time_to_setup.count() << " ms" << std::endl;

  // AoS: Get the average height of the babies
  start = std::chrono::system_clock::now();
  float sum_height = 0;
  for (auto i = 0; i < dataset_size; ++i) {
    sum_height += dataset_AoS.Babies[i].height;
  }
  end = std::chrono::system_clock::now();
  auto time_to_average =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "[AoS] Average height: " << sum_height / dataset_size << " cm"
            << std::endl;
  // TODO: Also compute and print the average weight
  std::cout << "[AoS] Time to average: " << time_to_average.count() << " ms"
            << std::endl;

  // SoA: Get the average height of the babies
  start = std::chrono::system_clock::now();
  sum_height = 0;
  for (auto i = 0; i < dataset_size; ++i) {
    sum_height += dataset_SoA.heights[i];
  }
  end = std::chrono::system_clock::now();
  time_to_average =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "[SoA] Average height: " << sum_height / dataset_size
            << std::endl;
  std::cout << "[SoA] Time to average: " << time_to_average.count() << " ms"
            << std::endl;

  return 0;
}