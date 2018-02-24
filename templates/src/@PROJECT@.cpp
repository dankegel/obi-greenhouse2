/**

  Please begin by consulting README.md

  To configure, build, and run the program, we recommend using obi.

      $ obi go

  To configure command line arguments, environment variables, and other launch
  settings, edit the project.yaml file.


  Alternately, if you don't have obi installed, you can also configure and build with bau.

      $ bau build

  And if you want to get your hands dirty, there's nothing stopping you from using cmake directly!

 */

#include <libGreenhouse2/Greenhouse.h>

void Setup ()
{
  GHText *t = new GHText ("Hello Greenhouse!");  // Make a new GHText object &
  SlapOnFeld (t);  // place it at the center of the main feld
}
