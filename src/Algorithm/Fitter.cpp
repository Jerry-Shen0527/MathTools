#include "Fitter.h"

void PolynomialFitter::fit_data()
{
	using namespace std;
	if (data.empty())
	{
		return;
	}

	vector<double> diff_quotion;
	vector<double> new_diff_quotion;
	vector<double> rst_diff_quotion;
	diff_quotion.resize(data.size());
	new_diff_quotion.resize(data.size());
	rst_diff_quotion.resize(data.size());

	for (int i = 0; i < data.size(); ++i)
	{
		new_diff_quotion[0] = y(i);
		for (int j = 1; j <= i; ++j)
		{
			new_diff_quotion[j] = diff(new_diff_quotion[j - 1], diff_quotion[j - 1], x(j), x(0));
		}
		std::swap(diff_quotion, new_diff_quotion);
		rst_diff_quotion[i] = diff_quotion[i];
	}

	rst = [&rst_diff_quotion, this](const double x)->double
	{
		double rst = 0;
		double temp = 1;

		for (int i = 0; i < data.size() - 1; ++i)
		{
			rst += rst_diff_quotion[i] * temp;
			temp *= x - this->x(i);
		}

		return rst + rst_diff_quotion[data.size() - 1] * temp;
	};
}

