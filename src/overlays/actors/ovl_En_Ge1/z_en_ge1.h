#ifndef Z_EN_GE1_H
#define Z_EN_GE1_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_ge1/object_ge1.h"

struct EnGe1;

typedef void (*EnGe1AnimFunc)(struct EnGe1*);
typedef void (*EnGe1ActionFunc)(struct EnGe1*, struct PlayState*);

typedef enum EnGe1Type {
    /* 0x00 */ GE1_TYPE_GATE_GUARD,
    /* 0x01 */ GE1_TYPE_GATE_OPERATOR,
    /* 0x04 */ GE1_TYPE_NORMAL = 4,
    /* 0x05 */ GE1_TYPE_VALLEY_FLOOR,
    /* 0x45 */ GE1_TYPE_HORSEBACK_ARCHERY = 0x45,
    /* 0x46 */ GE1_TYPE_TRAINING_GROUNDS_GUARD
} EnGe1Type;

typedef struct EnGe1 {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ ColliderCylinder collider;
    /* 0x0198 */ SkelAnime skelAnime;
    /* 0x01DC */ Vec3s jointTable[GERUDO_WHITE_LIMB_MAX];
    /* 0x023C */ Vec3s morphTable[GERUDO_WHITE_LIMB_MAX];
    /* 0x029C */ Vec3s headRot;
    /* 0x02A2 */ Vec3s unk_2A2;
    /* 0x02A8 */ s16 eyeIndex;
    /* 0x02AA */ s16 blinkTimer;
    /* 0x02AC */ u16 stateFlags;
    /* 0x02AE */ u8 hairstyle;
    /* 0x02AF */ u8 cutsceneTimer;
    /* 0x02B0 */ AnimationHeader* animation;
    /* 0x02B4 */ EnGe1ActionFunc actionFunc;
    /* 0x02B8 */ EnGe1AnimFunc animFunc;
} EnGe1; // size = 0x02BC

#endif
