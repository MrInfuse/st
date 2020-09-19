  static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#E45649", /* red     */
  [2] = "#50A14F", /* green   */
  [3] = "#986801", /* yellow  */
  [4] = "#4078F2", /* blue    */
  [5] = "#A626A4", /* magenta */
  [6] = "#0184BC", /* cyan    */
  [7] = "#A0A1A7", /* white   */

  /* 8 bright colors */
  [8]  = "#383A42", /* black   */
  [9]  = "#E45649", /* red     */
  [10] = "#50A14F", /* green   */
  [11] = "#986801", /* yellow  */
  [12] = "#4078F2", /* blue    */
  [13] = "#A626A4", /* magenta */
  [14] = "#0184BC", /* cyan    */
  [15] = "#FFFFFF", /* white   */

  /* special colors */
  [256] = "#CCCCCC", /* background */
  [257] = "#0066FF", /* foreground */
  [258] = "#383A42"
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */

unsigned int defaultbg = 256;
unsigned int defaultfg = 257;
static unsigned int defaultcs = 258;
static unsigned int defaultrcs= 15;
