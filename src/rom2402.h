/*  Copyright (c) 2013, laborer (laborer@126.com)
 *  Licensed under the BSD 2-Clause License.
 */


#ifndef __ROM2402_H
#define __ROM2402_H


#define ROM2402_PAGEBITS 3


unsigned char rom2402_read(unsigned char dev, unsigned char addr);
void rom2402_readstr(unsigned char dev, 
                     unsigned char addr, 
                     unsigned char __idata *p,
                     unsigned char n);
void rom2402_write(unsigned char dev, unsigned char addr, unsigned char c);
void rom2402_writestr(unsigned char dev, 
                      unsigned char addr, 
                      const unsigned char __idata *p,
                      unsigned char n);


#endif /* __ROM2402_H */
