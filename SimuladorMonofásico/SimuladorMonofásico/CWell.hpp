#ifndef CWELL_HPP
#define CWELL_HPP

#include <vector>
#include<iostream>

class CWell {

private:
	std::vector<double> tp{0, 300};			/// tempos de mudanca na vazao na superficie [h]
	std::vector<double> qsc{0, -300 };		/// vazoes nos tempos de mudanca [m^3 std / dia]
	std::vector<double> dz{ 1,1 };			/// altura de cada delta z
	std::vector<double> partial{1,1};		/// porcentagem de abertura de cada delta z
	double rw{ 0.09486 };					/// raio do poco [m]

public:
	CWell() {}
	CWell(std::vector<double> _tp, std::vector<double> _qsc, std::vector<double> _dz, std::vector<double> _partial, double _rw) : tp{ _tp }, qsc{ _qsc }, dz{ _dz }, partial{ _partial }, rw{ _rw }{}
	std::vector<double> get_tp() { return tp; }
	std::vector<double> get_qsc() { return qsc; }
	std::vector<double> get_dz() { return dz; }
	std::vector<double> get_partial() { return partial; }
	double get_rw() { return rw; }
	double get_qsc(double time);
	double get_partial(int i) { return partial[i]; }
	void print();
};
#endif