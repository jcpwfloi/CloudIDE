/**	Global Variables	*/ 

struct word {
	std::string data;
	int type, div;
	
	inline word () {
		data = "";
		type = 0;
		div = 0;
	}
	
	inline word (std::string const& _data, int const& _type, int const& _div) {
		data = _data;
		type = _type;
		div = _div;
	}
};

int div_count;

std::map < std::string, int > div_number;
std::vector < std::string > div_string;

std::vector < word > word_list;

int pair_count;

std::map < std::string, int > pair_number;
std::vector < bool > pair_boolean;

/**	Variables for highlight.h	*/

std::vector < word > belong;
