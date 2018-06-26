#include <codecvt>
#include <iostream>
#include <cwctype>
#include "../../utfcpp/source/utf8/core.h"
using namespace std;

#include <boost/iostreams/device/mapped_file.hpp>
#include <boost/iostreams/stream.hpp>
#include <boost/iostreams/device/array.hpp>
#include <boost/iostreams/filtering_stream.hpp>
#include <boost/tokenizer.hpp>
using namespace boost::iostreams;

bool valid_utf8_file(istream_iterator<char> begin, istream_iterator<char> end)
{
	return utf8::is_valid(begin, end);
}

int main()
{
	auto path = "C:\\Dev\\language testing\\Hemo\\Hemo.Test\\Main.hemo";
	mapped_file_source file(path);

	// Check if file was successfully opened
	if (!file.is_open()) {
		cout << "could not map the file " << path << endl;
		return 1;
	}
	
	for (auto c : file)
	{
		if (iswspace(c))
			;
	}

	basic_array_source<char> input_source(file.data(), file.size());
	stream<basic_array_source<char>> is(input_source);
	
	/*for (string s; getline(is, s);)
		cout << s << endl;*/
	//input_stream.imbue(locale(locale::empty(), new codecvt_utf8<wchar_t>));
	
	istream_iterator<char> file_iter(is);
	istream_iterator<char> end_of_stream;

	/*char buffer[4096];
	is.getline(buffer, 4096);*/
	

	typedef boost::tokenizer<boost::char_separator<char>, istream_iterator<char>> tokenizer;

	boost::char_separator<char> sep/*("\t, ", "\n")*/;

	tokenizer tokens(file_iter, end_of_stream, sep);

	//for (auto token : tokens)
	for (tokenizer::iterator tok_iter = tokens.begin(); tok_iter != tokens.end(); ++tok_iter)
		cout << *tok_iter << endl;

	//return 0;

	//auto asdf = input_stream.rdbuf();
	//auto size = file.size();
	//cout << size << endl;
	//// Get pointer to the data
	//int * data = (int *)file.data();

	//// Do something with the data
	//

	//// Remember to unmap the file
	//file.close();

	return 0;
}
