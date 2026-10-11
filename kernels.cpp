#include <cstddef>
#include <iostream>
#include <vector>

void vector_add(const float* a, const float* b, float* out, std::size_t n) {
	for (std::size_t i = 0; i < n; ++i) {
		out[i] = a[i] + b[i];
	}
}

float dot_product(const float* a, const float* b, std::size_t n) {
	float sum = 0;
	for (std::size_t i = 0; i < n; ++i) {
		sum += a[i] * b[i];
	}
	return sum;
}

int main() {
	const std::vector<float> a{1.0f, 2.0f, 3.0f, 4.0f};
	const std::vector<float> b{5.0f, 6.0f, 7.0f, 8.0f};
	std::vector<float> out(a.size());

	vector_add(a.data(), b.data(), out.data(), a.size());

	for (float value : out) {
		std::cout << value << ' ';
	}
	std::cout << '\n';

	
	float dot_result = dot_product(a.data(), b.data(), a.size());
	std::cout << dot_result << '\n';
	
}
	
