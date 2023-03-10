/**
 *
 *      @author Sean Hobeck
 *       @date 02-15-2023
 *
 **/
#pragma once

 /// @uses: std::string
#include <string>

enum
{
    ET_EMPTY = 0,
    ET_LIGHT,
    ET_MAPMODEL,
    ET_PLAYERSTART,
    ET_ENVMAP,
    ET_PARTICLES,
    ET_SOUND,
    ET_SPOTLIGHT,
    ET_GAMESPECIFIC
};

enum
{
    EF_NOVIS = 1 << 0,
    EF_NOSHADOW = 1 << 1,
    EF_NOCOLLIDE = 1 << 2,
    EF_ANIM = 1 << 3,
    EF_OCTA = 1 << 4,
    EF_RENDER = 1 << 5,
    EF_SOUND = 1 << 6,
    EF_SPAWNED = 1 << 7,
    EF_NOPICKUP = 1 << 8
};

enum
{
    CS_ALIVE = 0,
    CS_DEAD,
    CS_SPAWNING,
    CS_LAGGED,
    CS_EDITING,
    CS_SPECTATOR
};

enum
{
    PHYS_FLOAT = 0,
    PHYS_FALL,
    PHYS_SLIDE,
    PHYS_SLOPE,
    PHYS_FLOOR,
    PHYS_STEP_UP,
    PHYS_STEP_DOWN,
    PHYS_BOUNCE
};

enum
{
    ENT_PLAYER = 0,
    ENT_AI,
    ENT_INANIMATE,
    ENT_CAMERA,
    ENT_BOUNCE
};

enum
{
    COLLIDE_NONE = 0,
    COLLIDE_ELLIPSE,
    COLLIDE_OBB,
    COLLIDE_ELLIPSE_PRECISE
};

enum
{
    ANIM_DEAD = 0,
    ANIM_DYING,
    ANIM_IDLE,
    ANIM_FORWARD,
    ANIM_BACKWARD,
    ANIM_LEFT,
    ANIM_RIGHT,
    ANIM_HOLD1,
    ANIM_HOLD2,
    ANIM_HOLD3,
    ANIM_HOLD4,
    ANIM_HOLD5,
    ANIM_HOLD6,
    ANIM_HOLD7,
    ANIM_ATTACK1,
    ANIM_ATTACK2,
    ANIM_ATTACK3,
    ANIM_ATTACK4,
    ANIM_ATTACK5,
    ANIM_ATTACK6,
    ANIM_ATTACK7,
    ANIM_PAIN,
    ANIM_JUMP,
    ANIM_SINK,
    ANIM_SWIM,
    ANIM_EDIT,
    ANIM_LAG,
    ANIM_TAUNT,
    ANIM_WIN,
    ANIM_LOSE,
    ANIM_GUN_IDLE,
    ANIM_GUN_SHOOT,
    ANIM_VWEP_IDLE,
    ANIM_VWEP_SHOOT,
    ANIM_SHIELD,
    ANIM_POWERUP,
    ANIM_MAPMODEL,
    ANIM_TRIGGER,
    NUMANIMS
};

enum
{
    AI_NONE = 0,
    AI_BOT,
    AI_MAX
};

enum
{
    MM_AUTH = -1,
    MM_OPEN = 0,
    MM_VETO,
    MM_LOCKED,
    MM_PRIVATE,
    MM_PASSWORD,
    MM_START = MM_AUTH
};

enum
{
    S_JUMP = 0, S_LAND, S_RIFLE, S_PUNCH1, S_SG, S_CG,
    S_RLFIRE, S_RLHIT, S_WEAPLOAD, S_ITEMAMMO, S_ITEMHEALTH,
    S_ITEMARMOUR, S_ITEMPUP, S_ITEMSPAWN, S_TELEPORT, S_NOAMMO, S_PUPOUT,
    S_PAIN1, S_PAIN2, S_PAIN3, S_PAIN4, S_PAIN5, S_PAIN6,
    S_DIE1, S_DIE2,
    S_FLAUNCH, S_FEXPLODE,
    S_SPLASH1, S_SPLASH2,
    S_GRUNT1, S_GRUNT2, S_RUMBLE,
    S_PAINO,
    S_PAINR, S_DEATHR,
    S_PAINE, S_DEATHE,
    S_PAINS, S_DEATHS,
    S_PAINB, S_DEATHB,
    S_PAINP, S_PIGGR2,
    S_PAINH, S_DEATHH,
    S_PAIND, S_DEATHD,
    S_PIGR1, S_ICEBALL, S_SLIMEBALL,
    S_JUMPPAD, S_PISTOL,
    S_V_BASECAP, S_V_BASELOST,
    S_V_FIGHT,
    S_V_BOOST, S_V_BOOST10,
    S_V_QUAD, S_V_QUAD10,
    S_V_RESPAWNPOINT,
    S_FLAGPICKUP,
    S_FLAGDROP,
    S_FLAGRETURN,
    S_FLAGSCORE,
    S_FLAGRESET,
    S_BURN,
    S_CHAINSAW_ATTACK,
    S_CHAINSAW_IDLE,
    S_HIT,
    S_FLAGFAIL
};

enum
{
    PRIV_NONE = 0,
    PRIV_MASTER,
    PRIV_AUTH,
    PRIV_ADMIN
};

enum e_msg_sz
{
    N_CONNECT = 0, N_SERVINFO = 0, N_WELCOME = 1, N_INITCLIENT = 0, N_POS = 0, N_TEXT = 0, N_SOUND = 2, N_CDIS = 2,
    N_SHOOT = 0, N_EXPLODE = 0, N_SUICIDE = 1,
    N_DIED = 5, N_DAMAGE = 6, N_HITPUSH = 7, N_SHOTFX = 10, N_EXPLODEFX = 4,
    N_TRYSPAWN = 1, N_SPAWNSTATE = 14, N_SPAWN = 3, N_FORCEDEATH = 2,
    N_GUNSELECT = 2, N_TAUNT = 1,
    N_MAPCHANGE = 0, N_MAPVOTE = 0, N_TEAMINFO = 0, N_ITEMSPAWN = 2, N_ITEMPICKUP = 2, N_ITEMACC = 3,
    N_PING = 2, N_PONG = 2, N_CLIENTPING = 2,
    N_TIMEUP = 2, N_FORCEINTERMISSION = 1,
    N_SERVMSG = 0, N_ITEMLIST = 0, N_RESUME = 0,
    N_EDITMODE = 2, N_EDITENT = 11, N_EDITF = 16, N_EDITT = 16, N_EDITM = 16, N_FLIP = 14, N_COPY = 14, N_PASTE = 14, N_ROTATE = 15, N_REPLACE = 17,
    N_DELCUBE = 14, N_REMIP = 1, N_EDITVSLOT = 16, N_UNDO = 0, N_REDO = 0, N_NEWMAP = 2, N_GETMAP = 1, N_SENDMAP = 0, N_EDITVAR = 0,
    N_MASTERMODE = 2, N_KICK = 0, N_CLEARBANS = 1, N_CURRENTMASTER = 0, N_SPECTATOR = 3, N_SETMASTER = 0, N_SETTEAM = 0,
    N_BASES = 0, N_BASEINFO = 0, N_BASESCORE = 0, N_REPAMMO = 1, N_BASEREGEN = 6, N_ANNOUNCE = 2,
    N_LISTDEMOS = 1, N_SENDDEMOLIST = 0, N_GETDEMO = 3, N_SENDDEMO = 0,
    N_DEMOPLAYBACK = 3, N_RECORDDEMO = 2, N_STOPDEMO = 1, N_CLEARDEMOS = 2,
    N_TAKEFLAG = 3, N_RETURNFLAG = 4, N_RESETFLAG = 6, N_INVISFLAG = 3, N_TRYDROPFLAG = 1, N_DROPFLAG = 7, N_SCOREFLAG = 10, N_INITFLAGS = 0,
    N_SAYTEAM = 0,
    N_CLIENT = 0,
    N_AUTHTRY = 0, N_AUTHKICK = 0, N_AUTHCHAL = 0, N_AUTHANS = 0, N_REQAUTH = 0,
    N_PAUSEGAME = 0, N_GAMESPEED = 0,
    N_ADDBOT = 2, N_DELBOT = 1, N_INITAI = 0, N_FROMAI = 2, N_BOTLIMIT = 2, N_BOTBALANCE = 2,
    N_MAPCRC = 0, N_CHECKMAPS = 1,
    N_SWITCHNAME = 0, N_SWITCHMODEL = 2, N_SWITCHTEAM = 0,
    N_INITTOKENS = 0, N_TAKETOKEN = 2, N_EXPIRETOKENS = 0, N_DROPTOKENS = 0, N_DEPOSITTOKENS = 2, N_STEALTOKENS = 0,
    N_SERVCMD = 0,
    N_DEMOPACKET = 0,
};


///------------------ @section Macro Definitions -------------------///


#define ANIM_ALL         0x7F
#define ANIM_INDEX       0x7F
#define ANIM_LOOP        (1<<7)
#define ANIM_START       (1<<8)
#define ANIM_END         (1<<9)
#define ANIM_REVERSE     (1<<10)
#define ANIM_CLAMP       (ANIM_START | ANIM_END)
#define ANIM_DIR         0x780
#define ANIM_SECONDARY   11
#define ANIM_NOSKIN      (1<<22)
#define ANIM_SETTIME     (1<<23)
#define ANIM_FULLBRIGHT  (1<<24)
#define ANIM_REUSE       (1<<25)
#define ANIM_NORENDER    (1<<26)
#define ANIM_RAGDOLL     (1<<27)
#define ANIM_SETSPEED    (1<<28)
#define ANIM_NOPITCH     (1<<29)
#define ANIM_GHOST       (1<<30)
#define ANIM_FLAGS       (0x1FF<<22)

#define MAXBOTS 32

#define isaitype(a) (a > = 0 && a <= AI_MAX-1)