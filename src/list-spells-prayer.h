/*
 * File: list-spells-prayer.h
 * Purpose: List spells for priestly spell domain.
 */

/* id								aim		value func					handler */
SPELL(PRAYER_DETECT_EVIL,			FALSE,	NULL,						F(DETECT_EVIL))
SPELL(PRAYER_CURE_LIGHT_WOUNDS,		FALSE,	V(CURE_LIGHT_WOUNDS),		F(CURE_LIGHT_WOUNDS))
SPELL(PRAYER_BLESS,					FALSE,	V(BLESS),					F(BLESS))
SPELL(PRAYER_REMOVE_FEAR,			FALSE,	NULL,						F(REMOVE_FEAR))
SPELL(PRAYER_CALL_LIGHT,			FALSE,	V(CALL_LIGHT),				F(CALL_LIGHT))
SPELL(PRAYER_FIND_TRAPS_DOORS,		FALSE,	NULL,						F(FIND_TRAPS_DOORS))
SPELL(PRAYER_XXX,					FALSE,	NULL,						NULL)
SPELL(PRAYER_SLOW_POISON,			FALSE,	NULL,						F(SLOW_POISON))
SPELL(PRAYER_SCARE_MONSTER,			TRUE,	NULL,						F(SCARE_MONSTER))
SPELL(PRAYER_PORTAL,				FALSE,	V(PORTAL),					F(PORTAL))
SPELL(PRAYER_CURE_SERIOUS_WOUNDS,	FALSE,	V(CURE_SERIOUS_WOUNDS),		F(CURE_SERIOUS_WOUNDS))
SPELL(PRAYER_CHANT,					FALSE,	V(CHANT),					F(CHANT))
SPELL(PRAYER_SANCTUARY,				FALSE,	NULL,						F(SANCTUARY))
SPELL(PRAYER_SATISFY_HUNGER,		FALSE,	NULL,						F(SATISFY_HUNGER))
SPELL(PRAYER_REMOVE_CURSE,			FALSE,	NULL,						F(REMOVE_CURSE))
SPELL(PRAYER_RESIST_HEAT_COLD,		FALSE,	V(RESIST_HEAT_COLD),		F(RESIST_HEAT_COLD))
SPELL(PRAYER_NEUTRALIZE_POISON,		FALSE,	NULL,						F(NEUTRALIZE_POISON))
SPELL(PRAYER_ORB_OF_DRAINING,		TRUE,	V(ORB_OF_DRAINING),			F(ORB_OF_DRAINING))
SPELL(PRAYER_CURE_CRITICAL_WOUNDS,	FALSE,	V(CURE_CRITICAL_WOUNDS),	F(CURE_CRITICAL_WOUNDS))
SPELL(PRAYER_SENSE_INVISIBLE,		FALSE,	V(SENSE_INVISIBLE),			F(SENSE_INVISIBLE))
SPELL(PRAYER_PROTECTION_FROM_EVIL,	FALSE,	V(PROTECTION_FROM_EVIL),	F(PROTECTION_FROM_EVIL))
SPELL(PRAYER_EARTHQUAKE,			FALSE,	NULL,						F(EARTHQUAKE))
SPELL(PRAYER_SENSE_SURROUNDINGS,	FALSE,	NULL,						F(SENSE_SURROUNDINGS))
SPELL(PRAYER_CURE_MORTAL_WOUNDS,	FALSE,	V(CURE_MORTAL_WOUNDS),		F(CURE_MORTAL_WOUNDS))
SPELL(PRAYER_TURN_UNDEAD,			FALSE,	NULL,						F(TURN_UNDEAD))
SPELL(PRAYER_PRAYER,				FALSE,	V(PRAYER),					F(PRAYER))
SPELL(PRAYER_DISPEL_UNDEAD,			FALSE,	V(DISPEL_UNDEAD),			F(DISPEL_UNDEAD))
SPELL(PRAYER_HEAL,					FALSE,	V(HEAL),					F(HEAL))
SPELL(PRAYER_DISPEL_EVIL,			FALSE,	V(DISPEL_EVIL),				F(DISPEL_EVIL))
SPELL(PRAYER_GLYPH_OF_WARDING,		FALSE,	NULL,						F(GLYPH_OF_WARDING))
SPELL(PRAYER_HOLY_WORD,				FALSE,	V(HOLY_WORD),				F(HOLY_WORD))
SPELL(PRAYER_DETECT_MONSTERS,		FALSE,	NULL,						F(DETECT_MONSTERS))
SPELL(PRAYER_DETECTION,				FALSE,	NULL,						F(DETECTION))
SPELL(PRAYER_PERCEPTION,			FALSE,	NULL,						F(PERCEPTION))
SPELL(PRAYER_PROBING,				FALSE,	NULL,						F(PROBING))
SPELL(PRAYER_CLAIRVOYANCE,			FALSE,	NULL,						F(CLAIRVOYANCE))
SPELL(PRAYER_CURE_SERIOUS_WOUNDS2,	FALSE,	V(CURE_SERIOUS_WOUNDS2),	F(CURE_SERIOUS_WOUNDS2))
SPELL(PRAYER_CURE_MORTAL_WOUNDS2,	FALSE,	V(CURE_MORTAL_WOUNDS2),		F(CURE_MORTAL_WOUNDS2))
SPELL(PRAYER_HEALING,				FALSE,	V(HEALING),					F(HEALING))
SPELL(PRAYER_RESTORATION,			FALSE,	NULL,						F(RESTORATION))
SPELL(PRAYER_REMEMBRANCE,			FALSE,	NULL,						F(REMEMBRANCE))
SPELL(PRAYER_DISPEL_UNDEAD2,		FALSE,	V(DISPEL_UNDEAD2),			F(DISPEL_UNDEAD2))
SPELL(PRAYER_DISPEL_EVIL2,			FALSE,	V(DISPEL_EVIL2),			F(DISPEL_EVIL2))
SPELL(PRAYER_BANISH_EVIL,			FALSE,	NULL,						F(BANISH_EVIL))
SPELL(PRAYER_WORD_OF_DESTRUCTION,	FALSE,	NULL,						F(WORD_OF_DESTRUCTION))
SPELL(PRAYER_ANNIHILATION,			TRUE,	V(ANNIHILATION),			F(ANNIHILATION))
SPELL(PRAYER_UNBARRING_WAYS,		FALSE,	NULL,						F(UNBARRING_WAYS))
SPELL(PRAYER_RECHARGING,			FALSE,	NULL,						F(RECHARGING))
SPELL(PRAYER_DISPEL_CURSE,			FALSE,	NULL,						F(DISPEL_CURSE))
SPELL(PRAYER_ENCHANT_WEAPON,		FALSE,	NULL,						F(ENCHANT_WEAPON))
SPELL(PRAYER_ENCHANT_ARMOUR,		FALSE,	NULL,						F(ENCHANT_ARMOUR))
SPELL(PRAYER_ELEMENTAL_BRAND,		FALSE,	NULL,						F(ELEMENTAL_BRAND))
SPELL(PRAYER_BLINK,					FALSE,	V(BLINK),					F(BLINK))
SPELL(PRAYER_TELEPORT_SELF,			FALSE,	V(TELEPORT_SELF),			F(TELEPORT_SELF))
SPELL(PRAYER_TELEPORT_OTHER,		TRUE,	NULL,						F(TELEPORT_OTHER))
SPELL(PRAYER_TELEPORT_LEVEL,		FALSE,	NULL,						F(TELEPORT_LEVEL))
SPELL(PRAYER_WORD_OF_RECALL,		FALSE,	NULL,						F(WORD_OF_RECALL))
SPELL(PRAYER_ALTER_REALITY,			FALSE,	NULL,						F(ALTER_REALITY))
SPELL(PRAYER_MAX,					FALSE,	NULL,						NULL)
