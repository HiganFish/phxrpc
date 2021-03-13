//
// Created by rjd67 on 2021/3/13.
//

#include "summon_client.h"

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "wrong number of argc\n");
		exit(-1);
	}
	const char* config_file = argv[1];

	SummonClient summon_client;

	if (!summon_client.Init(config_file))
	{
		fprintf(stderr, "summon_client init error\n");
		exit(-1);
	}

	summon::SummonRequest request;
	request.set_id("lsmg");
	request.set_number(10);

	summon::SummonResult result;

	summon_client.Summon(request, &result);

	std::cout << result.Utf8DebugString();

	return 0;
}