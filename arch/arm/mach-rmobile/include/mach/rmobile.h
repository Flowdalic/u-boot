#ifndef __ASM_ARCH_RMOBILE_H
#define __ASM_ARCH_RMOBILE_H

#if defined(CONFIG_ARCH_RMOBILE)
#if defined(CONFIG_R8A7740)
#include <asm/arch/r8a7740.h>
#elif defined(CONFIG_R8A7790)
#include <asm/arch/r8a7790.h>
#elif defined(CONFIG_R8A7791)
#include <asm/arch/r8a7791.h>
#elif defined(CONFIG_R8A7792)
#include <asm/arch/r8a7792.h>
#elif defined(CONFIG_R8A7793)
#include <asm/arch/r8a7793.h>
#elif defined(CONFIG_R8A7794)
#include <asm/arch/r8a7794.h>
#elif defined(CONFIG_RCAR_GEN3)
#include <asm/arch/rcar-gen3-base.h>
#elif defined(CONFIG_RCAR_GEN4)
#include <asm/arch/rcar-gen4-base.h>
#elif defined(CONFIG_R7S72100)
#elif defined(CONFIG_RZG2L)
#include <asm/arch/rzg2l.h>
#else
#error "SOC Name not defined"
#endif
#endif /* CONFIG_ARCH_RMOBILE */

/* PRR CPU IDs */
#define RMOBILE_CPU_TYPE_R8A7740	0x40
#define RMOBILE_CPU_TYPE_R8A7790	0x45
#define RMOBILE_CPU_TYPE_R8A7791	0x47
#define RMOBILE_CPU_TYPE_R8A7792	0x4A
#define RMOBILE_CPU_TYPE_R8A7793	0x4B
#define RMOBILE_CPU_TYPE_R8A7794	0x4C
#define RMOBILE_CPU_TYPE_R8A7795	0x4F
#define RMOBILE_CPU_TYPE_R8A7796	0x52
#define RMOBILE_CPU_TYPE_R8A77965	0x55
#define RMOBILE_CPU_TYPE_R8A77970	0x54
#define RMOBILE_CPU_TYPE_R8A77980	0x56
#define RMOBILE_CPU_TYPE_R8A77990	0x57
#define RMOBILE_CPU_TYPE_R8A77995	0x58
#define RMOBILE_CPU_TYPE_R8A779A0	0x59
#define RMOBILE_CPU_TYPE_R8A779F0	0x5A
#define RMOBILE_CPU_TYPE_R8A779G0	0x5C
#define RMOBILE_CPU_TYPE_R8A779H0	0x5D
#define RMOBILE_CPU_TYPE_R9A07G044L	0x9A070440

#ifndef __ASSEMBLY__
#include <asm/types.h>

const u8 *rzg_get_cpu_name(void);
u32 rmobile_get_cpu_type(void);
u32 rmobile_get_cpu_rev_integer(void);
u32 rmobile_get_cpu_rev_fraction(void);
#endif /* __ASSEMBLY__ */

#endif /* __ASM_ARCH_RMOBILE_H */
