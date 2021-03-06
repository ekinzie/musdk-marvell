/******************************************************************************
 *	Copyright (C) 2016 Marvell International Ltd.
 *
 *  If you received this File from Marvell, you may opt to use, redistribute
 *  and/or modify this File under the following licensing terms.
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *	* Redistributions of source code must retain the above copyright
 *	  notice, this list of conditions and the following disclaimer.
 *
 *	* Redistributions in binary form must reproduce the above copyright
 *	  notice, this list of conditions and the following disclaimer in the
 *	  documentation and/or other materials provided with the distribution.
 *
 *	* Neither the name of Marvell nor the names of its contributors may be
 *	  used to endorse or promote products derived from this software
 *	  without specific prior written permission.
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

#ifndef __MV_PP2_HIF_H__
#define __MV_PP2_HIF_H__

#include "mv_std.h"

/** @addtogroup grp_pp2_hif Packet Processor: Host Interface
 *
 *  Packet Processor Host Interface API documentation
 *
 *  @{
 */

struct pp2_hif;

/**
 * hif init parameters
 *
 */
struct pp2_hif_params {
	/** Used for DTS acc to find appropriate "physical" H-IF obj;
	 * E.g. "hif-0" means PPv2,HIF[0]
	 */
	const char	*match;
	u32		 out_size; /**< TX-Aggregation q_size */
};

/**
 * Initialize a Host Interface (hif)
 *
 * @param[in]	params	A pointer to structure that contains all relevant parameters.
 * @param[out]	hif	A pointer to opaque hif handle of type 'struct pp2_hif *'.
 *
 * @retval	0 on success
 * @retval	<0 on failure
 */
int pp2_hif_init(struct pp2_hif_params *params, struct pp2_hif **hif);

/**
 * Destroy a Host Interface (hif)
 *
 * @param[in]	hif	A hif handle.
 *
 */
void pp2_hif_deinit(struct pp2_hif *hif);

/** @} */ /* end of grp_pp2_hif */

#endif /* __MV_PP2_HIF_H__ */
