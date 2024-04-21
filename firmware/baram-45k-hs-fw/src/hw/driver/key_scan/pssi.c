#include "pssi.h"
#include "cli.h"


static void cliCmd(cli_args_t *args);






bool pssiInit(void)
{

  cliAdd("pssi", cliCmd);

  return true;
}

void cliCmd(cli_args_t *args)
{
  bool ret = false;


  if (args->argc == 1 && args->isStr(0, "info"))
  {
    ret = true;
  }


  if (ret == false)
  {
    cliPrintf("psii info\n");
  }
}





