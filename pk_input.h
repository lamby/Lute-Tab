/* pk_input.h	Samuel W. Bent		1/23/91 */
/* routines for reading PK files */

/* $Header: /usr/everest/wbc/src/lute/RCS/pk_input.h,v 1.1 92/08/18 13:08:44 wbc Exp $ */
/* $Log:	pk_input.h,v $
 * Revision 1.1  92/08/18  13:08:44  wbc
 * Initial revision
 * 
 */

#ifndef _PK_INPUT_
#define _PK_INPUT_

#include "pkfile.h"

int		pk_read_preamble(/* fp, pp */);
int		pk_next_nybble(file_in *pk);
int		pk_prepare_for_bitmap();
int		pk_packed_number(/* fp, dyn_f, result */);
void		pk_read_packet_header(file_in *pk, PKPacketHeader *h);
unsigned char *	pk_read_bitmap(file_in *pk, PKPacketHeader *h);

#endif /* #ifndef _PK_INPUT_ */
