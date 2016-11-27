/******************************************************************************
 *      Copyright (C) 2016 Marvell International Ltd.
 *
 *  If you received this File from Marvell, you may opt to use, redistribute
 *  and/or modify this File under the following licensing terms.
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *      * Redistributions of source code must retain the above copyright
 *        notice, this list of conditions and the following disclaimer.
 *
 *      * Redistributions in binary form must reproduce the above copyright
 *        notice, this list of conditions and the following disclaimer in the
 *        documentation and/or other materials provided with the distribution.
 *
 *      * Neither the name of Marvell nor the names of its contributors may be
 *        used to endorse or promote products derived from this software
 *        without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/

#ifndef __MV_MD5_h__
#define __MV_MD5_h__

#ifdef __cplusplus
extern "C" {
#endif


#define MV_MD5_MAC_LEN		(16)	/* bytes */

	typedef struct {
		unsigned int buf[4];
		unsigned int bits[2];
		unsigned char in[64];
	} MV_MD5_CONTEXT;

void mvMD5Init(MV_MD5_CONTEXT *context);
void mvMD5Update(MV_MD5_CONTEXT *context, unsigned char const *buf, unsigned len);
void mvMD5Final(unsigned char digest[16], MV_MD5_CONTEXT *context);
void mvMD5Digest(unsigned char digest[16], MV_MD5_CONTEXT *context);

void mvMD5(unsigned char const *buf, unsigned len, unsigned char *digest);

void mvHmacMd5(unsigned char const *text, int text_len,
	       unsigned char const *key, int key_len, unsigned char *digest);

#ifdef __cplusplus
}
#endif

#endif	/* __MV_MD5_H__ */
