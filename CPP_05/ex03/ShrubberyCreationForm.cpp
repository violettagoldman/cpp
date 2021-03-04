#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 137, 145)
{
	_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 137, 145), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), src.getExecGrade(), src.getSignGrade())
{
	this->_target = src.getTarget();
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
	{
		this->_target = src.getTarget();
	}
	return (*this);
}

std::string		ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &b) const
{
	std::string		tree =
"	         - - -\n"
"       -        -  -     --    -\n"
"    -                 -         -  -\n"
"                    -\n"
"                   -                --\n"
"   -          -            -              -\n"
"   -            \'-,        -               -\n"
"   -              \'b      *\n"
"    -              \'$    #-                --\n"
"   -    -           $:   #:               -\n"
" --      -  --      *#  @):        -   - -\n"
"              -     :@,@):   ,-**:\'   -\n"
"  -      -,         :@@*: --**\'      -   -\n"
"           \'#o-    -:(@\'-@*\"\'  -\n"
"   -  -       \'bq,--:,@@*\'   ,*      -  -\n"
"              ,p$q8,:@)\'  -p*\'      -\n"
"       -     \'  - \'@@Pp@@*\'    -  -\n"
"        -  - --    Y7\'.\'     -  -\n"
"                  :@):.\n"
"                 .:@:\'.\n"
"               .::(@:. \n";
	std::string fileName = _target + "_shrubbery";
	Form::execute(b);
	std::ofstream file(fileName);
	if (file.fail())
		throw FileWritingException();
	file << tree;
	file.close();
}

ShrubberyCreationForm::FileWritingException::FileWritingException(void)
{}

const char* ShrubberyCreationForm::FileWritingException::what() const throw()
{
	return "it is impossible to write to the file";
}

Form	*ShrubberyCreationForm::constructor(std::string target)
{
	return (new ShrubberyCreationForm(target));
}