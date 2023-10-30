#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime \
		fazladan domuz pastırması yemeyi seviyorum. Gerçekten seviyorum!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. \
		Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır \
		geliyorum, sen geçen aydan beri burada çalışmaya başladın." << std::endl;
}

void Harl::error(void)
{
	std::cout << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum." << std::endl;
}

void Harl::complain(std::string level)
{
	int i;

	fpoint fp[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4)
	{
		if (type[i] == level)
			break;
		i++;
	}
	while (i < 4)
	{
		std::cout << "[ " << type[i] << " ]" << std::endl;
		(this->*fp[i])();
		std::cout << "" << std::endl;
		i++;
	}
}
