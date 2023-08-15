#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 407
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 386
#define ALIAS_COUNT 0
#define TOKEN_COUNT 266
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

enum {
  aux_sym_config_token1 = 1,
  anon_sym_default_DASHrecipient = 2,
  anon_sym_default_DASHrecipient_DASHself = 3,
  anon_sym_no_DASHdefault_DASHrecipient = 4,
  anon_sym_verbose = 5,
  anon_sym_no_DASHtty = 6,
  anon_sym_enable_DASHlarge_DASHrsa = 7,
  anon_sym_disable_DASHlarge_DASHrsa = 8,
  anon_sym_enable_DASHdsa2 = 9,
  anon_sym_disable_DASHdsa2 = 10,
  anon_sym_no_DASHcompress = 11,
  anon_sym_bzip2_DASHdecompress_DASHlowmem = 12,
  anon_sym_mangle_DASHdos_DASHfilenames = 13,
  anon_sym_no_DASHmangle_DASHdos_DASHfilenames = 14,
  anon_sym_ask_DASHcert_DASHlevel = 15,
  anon_sym_no_DASHask_DASHcert_DASHlevel = 16,
  anon_sym_always_DASHtrust = 17,
  anon_sym_no_DASHauto_DASHkey_DASHlocate = 18,
  anon_sym_auto_DASHkey_DASHimport = 19,
  anon_sym_no_DASHauto_DASHkey_DASHimport = 20,
  anon_sym_auto_DASHkey_DASHretrieve = 21,
  anon_sym_no_DASHauto_DASHkey_DASHretrieve = 22,
  anon_sym_no_DASHsig_DASHcache = 23,
  anon_sym_auto_DASHcheck_DASHtrustdb = 24,
  anon_sym_no_DASHauto_DASHcheck_DASHtrustdb = 25,
  anon_sym_disable_DASHdirmngr = 26,
  anon_sym_no_DASHautostart = 27,
  anon_sym_lock_DASHonce = 28,
  anon_sym_lock_DASHmultiple = 29,
  anon_sym_lock_DASHnever = 30,
  anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror = 31,
  anon_sym_no_DASHrandom_DASHseed_DASHfile = 32,
  anon_sym_no_DASHgreeting = 33,
  anon_sym_no_DASHsecmem_DASHwarning = 34,
  anon_sym_no_DASHpermission_DASHwarning = 35,
  anon_sym_require_DASHsecmem = 36,
  anon_sym_no_DASHrequire_DASHsecmem = 37,
  anon_sym_require_DASHcross_DASHverification = 38,
  anon_sym_no_DASHrequire_DASHcross_DASHverification = 39,
  anon_sym_expert = 40,
  anon_sym_no_DASHexpert = 41,
  anon_sym_no_DASHencrypt_DASHto = 42,
  anon_sym_no_DASHgroups = 43,
  anon_sym_try_DASHall_DASHsecrets = 44,
  anon_sym_skip_DASHhidden_DASHrecipients = 45,
  anon_sym_no_DASHskip_DASHhidden_DASHrecipients = 46,
  anon_sym_armor = 47,
  anon_sym_no_DASHarmor = 48,
  anon_sym_with_DASHcolons = 49,
  anon_sym_legacy_DASHlist_DASHmode = 50,
  anon_sym_with_DASHfingerprint = 51,
  anon_sym_with_DASHsubkey_DASHfingerprint = 52,
  anon_sym_with_DASHicao_DASHspelling = 53,
  anon_sym_with_DASHkeygrip = 54,
  anon_sym_with_DASHkey_DASHorigin = 55,
  anon_sym_with_DASHwkd_DASHhash = 56,
  anon_sym_with_DASHsecret = 57,
  anon_sym_textmode = 58,
  anon_sym_no_DASHtextmode = 59,
  anon_sym_force_DASHocb = 60,
  anon_sym_force_DASHaead = 61,
  anon_sym_disable_DASHsigner_DASHuid = 62,
  anon_sym_include_DASHkey_DASHblock = 63,
  anon_sym_no_DASHinclude_DASHkey_DASHblock = 64,
  anon_sym_gnupg = 65,
  anon_sym_openpgp = 66,
  anon_sym_rfc4880 = 67,
  anon_sym_rfc4880bis = 68,
  anon_sym_rfc2440 = 69,
  anon_sym_pgp7 = 70,
  anon_sym_pgp8 = 71,
  anon_sym_list_DASHonly = 72,
  anon_sym_interactive = 73,
  anon_sym_debug_DASHall = 74,
  anon_sym_debug_DASHiolbf = 75,
  anon_sym_debug_DASHallow_DASHlarge_DASHchunks = 76,
  anon_sym_debug_DASHignore_DASHexpiration = 77,
  anon_sym_full_DASHtimestrings = 78,
  anon_sym_enable_DASHprogress_DASHfilter = 79,
  anon_sym_log_DASHtime = 80,
  anon_sym_no_DASHcomments = 81,
  anon_sym_emit_DASHversion = 82,
  anon_sym_no_DASHemit_DASHversion = 83,
  anon_sym_for_DASHyour_DASHeyes_DASHonly = 84,
  anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly = 85,
  anon_sym_use_DASHembedded_DASHfilename = 86,
  anon_sym_no_DASHuse_DASHembedded_DASHfilename = 87,
  anon_sym_throw_DASHkeyids = 88,
  anon_sym_no_DASHthrow_DASHkeyids = 89,
  anon_sym_not_DASHdash_DASHescaped = 90,
  anon_sym_escape_DASHfrom_DASHlines = 91,
  anon_sym_no_DASHescape_DASHfrom_DASHlines = 92,
  anon_sym_no_DASHsymkey_DASHcache = 93,
  anon_sym_allow_DASHnon_DASHselfsigned_DASHuid = 94,
  anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid = 95,
  anon_sym_allow_DASHfreeform_DASHuid = 96,
  anon_sym_ignore_DASHtime_DASHconflict = 97,
  anon_sym_ignore_DASHvalid_DASHfrom = 98,
  anon_sym_ignore_DASHcrc_DASHerror = 99,
  anon_sym_ignore_DASHmdc_DASHerror = 100,
  anon_sym_allow_DASHold_DASHcipher_DASHalgos = 101,
  anon_sym_allow_DASHweak_DASHdigest_DASHalgos = 102,
  anon_sym_allow_DASHweak_DASHkey_DASHsignatures = 103,
  anon_sym_override_DASHcompliance_DASHcheck = 104,
  anon_sym_no_DASHdefault_DASHkeyring = 105,
  anon_sym_no_DASHkeyring = 106,
  anon_sym_skip_DASHverify = 107,
  anon_sym_with_DASHkey_DASHdata = 108,
  anon_sym_list_DASHsignatures = 109,
  anon_sym_list_DASHsigs = 110,
  anon_sym_fast_DASHlist_DASHmode = 111,
  anon_sym_show_DASHsession_DASHkey = 112,
  anon_sym_ask_DASHsig_DASHexpire = 113,
  anon_sym_no_DASHask_DASHsig_DASHexpire = 114,
  anon_sym_ask_DASHcert_DASHexpire = 115,
  anon_sym_no_DASHask_DASHcert_DASHexpire = 116,
  anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey = 117,
  anon_sym_force_DASHsign_DASHkey = 118,
  anon_sym_forbid_DASHgen_DASHkey = 119,
  anon_sym_enable_DASHspecial_DASHfilenames = 120,
  anon_sym_preserve_DASHpermissions = 121,
  anon_sym_default_DASHkey = 122,
  anon_sym_list_DASHoptions = 123,
  anon_sym_COMMA = 124,
  sym__list_parameter = 125,
  anon_sym_verify_DASHoptions = 126,
  sym__verify_parameter = 127,
  anon_sym_photo_DASHviewer = 128,
  aux_sym__command_token1 = 129,
  anon_sym_DQUOTE = 130,
  aux_sym__command_token2 = 131,
  anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE = 132,
  anon_sym_SQUOTE = 133,
  aux_sym__command_token3 = 134,
  aux_sym__command_format_token1 = 135,
  anon_sym_exec_DASHpath = 136,
  anon_sym_keyring = 137,
  anon_sym_primary_DASHkeyring = 138,
  anon_sym_trustdb_DASHname = 139,
  anon_sym_display_DASHcharset = 140,
  sym__charset_value = 141,
  sym__utf8_strings = 142,
  sym__no_utf8_strings = 143,
  anon_sym_compress_DASHlevel = 144,
  aux_sym__compress_level_token1 = 145,
  anon_sym_bzip2_DASHcompress_DASHlevel = 146,
  anon_sym_default_DASHcert_DASHlevel = 147,
  aux_sym__default_cert_level_token1 = 148,
  anon_sym_min_DASHcert_DASHlevel = 149,
  anon_sym_trusted_DASHkey = 150,
  anon_sym_add_DASHdesig_DASHrevoker = 151,
  aux_sym__add_desig_revoker_token1 = 152,
  aux_sym__add_desig_revoker_token2 = 153,
  anon_sym_trust_DASHmodel = 154,
  sym__model = 155,
  anon_sym_assert_DASHsigner = 156,
  anon_sym_auto_DASHkey_DASHlocate = 157,
  sym__key_locate_value = 158,
  anon_sym_keyid_DASHformat = 159,
  sym__keyid_format_value = 160,
  anon_sym_keyserver = 161,
  anon_sym_completes_DASHneeded = 162,
  anon_sym_marginals_DASHneeded = 163,
  anon_sym_tofu_DASHdefault_DASHpolicy = 164,
  sym__tofu_policy_value = 165,
  anon_sym_max_DASHcert_DASHdepth = 166,
  anon_sym_agent_DASHprogram = 167,
  anon_sym_dirmngr_DASHprogram = 168,
  anon_sym_limit_DASHcard_DASHinsert_DASHtries = 169,
  anon_sym_recipient = 170,
  anon_sym_hidden_DASHrecipient = 171,
  anon_sym_recipient_DASHfile = 172,
  anon_sym_hidden_DASHrecipient_DASHfile = 173,
  anon_sym_encrypt_DASHto = 174,
  anon_sym_hidden_DASHencrypt_DASHto = 175,
  anon_sym_group = 176,
  anon_sym_EQ = 177,
  anon_sym_ungroup = 178,
  anon_sym_local_DASHuser = 179,
  anon_sym_sender = 180,
  anon_sym_try_DASHsecret_DASHname = 181,
  anon_sym_output = 182,
  anon_sym_max_DASHoutput = 183,
  anon_sym_chunk_DASHsize = 184,
  anon_sym_input_DASHsize_DASHhint = 185,
  anon_sym_key_DASHorigin = 186,
  sym__key_origin_value = 187,
  anon_sym_import_DASHoptions = 188,
  sym__import_parameter = 189,
  anon_sym_export_DASHoptions = 190,
  sym__export_parameter = 191,
  anon_sym_personal_DASHcipher_DASHpreferences = 192,
  anon_sym_personal_DASHdigest_DASHpreferences = 193,
  anon_sym_personal_DASHcompress_DASHpreferences = 194,
  anon_sym_s2k_DASHcipher_DASHalgo = 195,
  anon_sym_s2k_DASHdigest_DASHalgo = 196,
  anon_sym_s2k_DASHmode = 197,
  aux_sym__s2k_mode_token1 = 198,
  anon_sym_s2k_DASHcount = 199,
  anon_sym_compliance = 200,
  sym__compliance_value = 201,
  anon_sym_min_DASHrsa_DASHlength = 202,
  sym__require_compliance = 203,
  anon_sym_debug_DASHlevel = 204,
  sym__debug_level_value = 205,
  anon_sym_debug = 206,
  aux_sym__debug_token1 = 207,
  sym__debug_flag_value = 208,
  anon_sym_debug_DASHset_DASHiobuf_DASHsize = 209,
  anon_sym_faked_DASHsystem_DASHtime = 210,
  anon_sym_BANG = 211,
  anon_sym_status_DASHfd = 212,
  anon_sym_status_DASHfile = 213,
  anon_sym_logger_DASHfd = 214,
  anon_sym_logger_DASHfile = 215,
  anon_sym_log_DASHfile = 216,
  anon_sym_comment = 217,
  anon_sym_sig_DASHnotation = 218,
  anon_sym_cert_DASHnotation = 219,
  anon_sym_set_DASHnotation = 220,
  aux_sym__notation_format_token1 = 221,
  anon_sym_known_DASHnotation = 222,
  anon_sym_sig_DASHpolicy_DASHurl = 223,
  anon_sym_cert_DASHpolicy_DASHurl = 224,
  anon_sym_set_DASHpolicy_DASHurl = 225,
  anon_sym_sig_DASHkeyserver_DASHurl = 226,
  anon_sym_set_DASHfilename = 227,
  anon_sym_cipher_DASHalgo = 228,
  anon_sym_digest_DASHalgo = 229,
  anon_sym_compress_DASHalgo = 230,
  anon_sym_cert_DASHdigest_DASHalgo = 231,
  anon_sym_disable_DASHcipher_DASHalgo = 232,
  anon_sym_disable_DASHpubkey_DASHalgo = 233,
  anon_sym_passphrase_DASHrepeat = 234,
  anon_sym_passphrase_DASHfd = 235,
  anon_sym_passphrase_DASHfile = 236,
  anon_sym_passphrase = 237,
  anon_sym_pinentry_DASHmode = 238,
  sym__pinentry_mode_value = 239,
  anon_sym_request_DASHorigin = 240,
  sym__request_origin_value = 241,
  anon_sym_command_DASHfd = 242,
  anon_sym_command_DASHfile = 243,
  anon_sym_weak_DASHdigest = 244,
  anon_sym_override_DASHsession_DASHkey = 245,
  anon_sym_override_DASHsession_DASHkey_DASHfd = 246,
  anon_sym_default_DASHsig_DASHexpire = 247,
  anon_sym_default_DASHcert_DASHexpire = 248,
  anon_sym_default_DASHnew_DASHkey_DASHalgo = 249,
  sym__new_key_algo = 250,
  anon_sym_default_DASHpreference_DASHlist = 251,
  anon_sym_default_DASHkeyserver_DASHurl = 252,
  anon_sym_chuid = 253,
  sym_key = 254,
  sym_url = 255,
  sym_number = 256,
  sym_iso_time = 257,
  sym_expire_time = 258,
  aux_sym_string_token1 = 259,
  sym_comment = 260,
  sym__pubkey_algo_value = 261,
  sym__cipher_algo_value = 262,
  sym__hash_algo_value = 263,
  sym__compression_algo_value = 264,
  sym__space = 265,
  sym_config = 266,
  sym_option = 267,
  sym__default_key = 268,
  sym__list_options = 269,
  sym__verify_options = 270,
  sym__photo_viewer = 271,
  sym__command = 272,
  sym__command_format = 273,
  sym__exec_path = 274,
  sym__keyring = 275,
  sym__primary_keyring = 276,
  sym__trustdb_name = 277,
  sym__display_charset = 278,
  sym__compress_level = 279,
  sym__bzip2_compress_level = 280,
  sym__default_cert_level = 281,
  sym__min_cert_level = 282,
  sym__trusted_key = 283,
  sym__add_desig_revoker = 284,
  sym__trust_model = 285,
  sym__assert_signer = 286,
  sym__auto_key_locate = 287,
  sym__keyid_format = 288,
  sym__keyserver = 289,
  sym__completes_needed = 290,
  sym__marginals_needed = 291,
  sym__tofu_default_policy = 292,
  sym__max_cert_depth = 293,
  sym__agent_program = 294,
  sym__dirmngr_program = 295,
  sym__limit_card_insert_tries = 296,
  sym__recipient = 297,
  sym__hidden_recipient = 298,
  sym__recipient_file = 299,
  sym__hidden_recipient_file = 300,
  sym__encrypt_to = 301,
  sym__hidden_encrypt_to = 302,
  sym__group = 303,
  sym__ungroup = 304,
  sym__local_user = 305,
  sym__sender = 306,
  sym__try_secret_name = 307,
  sym__output = 308,
  sym__max_output = 309,
  sym__chunk_size = 310,
  sym__input_size_hint = 311,
  sym__key_origin = 312,
  sym__import_options = 313,
  sym__export_options = 314,
  sym__personal_cipher_preferences = 315,
  sym__personal_digest_preferences = 316,
  sym__personal_compress_preferences = 317,
  sym__s2k_cipher_algo = 318,
  sym__s2k_digest_algo = 319,
  sym__s2k_mode = 320,
  sym__s2k_count = 321,
  sym__compliance = 322,
  sym__min_rsa_length = 323,
  sym__debug_level = 324,
  sym__debug = 325,
  sym__debug_set_iobuf_size = 326,
  sym__faked_system_time = 327,
  sym__status_fd = 328,
  sym__status_file = 329,
  sym__logger_fd = 330,
  sym__logger_file = 331,
  sym__comment = 332,
  sym__sig_notation = 333,
  sym__cert_notation = 334,
  sym__set_notation = 335,
  aux_sym__notation = 336,
  sym__notation_format = 337,
  sym__known_notation = 338,
  sym__sig_policy_url = 339,
  sym__cert_policy_url = 340,
  sym__set_policy_url = 341,
  sym__sig_keyserver_url = 342,
  sym__set_filename = 343,
  sym__cipher_algo = 344,
  sym__digest_algo = 345,
  sym__compress_algo = 346,
  sym__cert_digest_algo = 347,
  sym__disable_cipher_algo = 348,
  sym__disable_pubkey_algo = 349,
  sym__passphrase_repeat = 350,
  sym__passphrase_fd = 351,
  sym__passphrase_file = 352,
  sym__passphrase = 353,
  sym__pinentry_mode = 354,
  sym__request_origin = 355,
  sym__command_fd = 356,
  sym__command_file = 357,
  sym__weak_digest = 358,
  sym__override_session_key = 359,
  sym__override_session_key_fd = 360,
  sym__default_sig_expire = 361,
  sym__default_cert_expire = 362,
  sym__default_new_key_algo = 363,
  sym__default_preference_list = 364,
  sym__default_preference_value = 365,
  sym__default_keyserver_url = 366,
  sym__chuid = 367,
  sym_string = 368,
  aux_sym_config_repeat1 = 369,
  aux_sym__list_options_repeat1 = 370,
  aux_sym__verify_options_repeat1 = 371,
  aux_sym__command_repeat1 = 372,
  aux_sym__command_repeat2 = 373,
  aux_sym__command_repeat3 = 374,
  aux_sym__auto_key_locate_repeat1 = 375,
  aux_sym__import_options_repeat1 = 376,
  aux_sym__export_options_repeat1 = 377,
  aux_sym__personal_cipher_preferences_repeat1 = 378,
  aux_sym__personal_digest_preferences_repeat1 = 379,
  aux_sym__personal_compress_preferences_repeat1 = 380,
  aux_sym__debug_repeat1 = 381,
  aux_sym__default_new_key_algo_repeat1 = 382,
  aux_sym__default_preference_list_repeat1 = 383,
  aux_sym_string_repeat1 = 384,
  aux_sym_string_repeat2 = 385,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
  [anon_sym_default_DASHrecipient] = "default-recipient",
  [anon_sym_default_DASHrecipient_DASHself] = "default-recipient-self",
  [anon_sym_no_DASHdefault_DASHrecipient] = "no-default-recipient",
  [anon_sym_verbose] = "verbose",
  [anon_sym_no_DASHtty] = "no-tty",
  [anon_sym_enable_DASHlarge_DASHrsa] = "enable-large-rsa",
  [anon_sym_disable_DASHlarge_DASHrsa] = "disable-large-rsa",
  [anon_sym_enable_DASHdsa2] = "enable-dsa2",
  [anon_sym_disable_DASHdsa2] = "disable-dsa2",
  [anon_sym_no_DASHcompress] = "no-compress",
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = "bzip2-decompress-lowmem",
  [anon_sym_mangle_DASHdos_DASHfilenames] = "mangle-dos-filenames",
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = "no-mangle-dos-filenames",
  [anon_sym_ask_DASHcert_DASHlevel] = "ask-cert-level",
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = "no-ask-cert-level",
  [anon_sym_always_DASHtrust] = "always-trust",
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = "no-auto-key-locate",
  [anon_sym_auto_DASHkey_DASHimport] = "auto-key-import",
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = "no-auto-key-import",
  [anon_sym_auto_DASHkey_DASHretrieve] = "auto-key-retrieve",
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = "no-auto-key-retrieve",
  [anon_sym_no_DASHsig_DASHcache] = "no-sig-cache",
  [anon_sym_auto_DASHcheck_DASHtrustdb] = "auto-check-trustdb",
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = "no-auto-check-trustdb",
  [anon_sym_disable_DASHdirmngr] = "disable-dirmngr",
  [anon_sym_no_DASHautostart] = "no-autostart",
  [anon_sym_lock_DASHonce] = "lock-once",
  [anon_sym_lock_DASHmultiple] = "lock-multiple",
  [anon_sym_lock_DASHnever] = "lock-never",
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = "exit-on-status-write-error",
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = "no-random-seed-file",
  [anon_sym_no_DASHgreeting] = "no-greeting",
  [anon_sym_no_DASHsecmem_DASHwarning] = "no-secmem-warning",
  [anon_sym_no_DASHpermission_DASHwarning] = "no-permission-warning",
  [anon_sym_require_DASHsecmem] = "require-secmem",
  [anon_sym_no_DASHrequire_DASHsecmem] = "no-require-secmem",
  [anon_sym_require_DASHcross_DASHverification] = "require-cross-verification",
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = "no-require-cross-verification",
  [anon_sym_expert] = "expert",
  [anon_sym_no_DASHexpert] = "no-expert",
  [anon_sym_no_DASHencrypt_DASHto] = "no-encrypt-to",
  [anon_sym_no_DASHgroups] = "no-groups",
  [anon_sym_try_DASHall_DASHsecrets] = "try-all-secrets",
  [anon_sym_skip_DASHhidden_DASHrecipients] = "skip-hidden-recipients",
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = "no-skip-hidden-recipients",
  [anon_sym_armor] = "armor",
  [anon_sym_no_DASHarmor] = "no-armor",
  [anon_sym_with_DASHcolons] = "with-colons",
  [anon_sym_legacy_DASHlist_DASHmode] = "legacy-list-mode",
  [anon_sym_with_DASHfingerprint] = "with-fingerprint",
  [anon_sym_with_DASHsubkey_DASHfingerprint] = "with-subkey-fingerprint",
  [anon_sym_with_DASHicao_DASHspelling] = "with-icao-spelling",
  [anon_sym_with_DASHkeygrip] = "with-keygrip",
  [anon_sym_with_DASHkey_DASHorigin] = "with-key-origin",
  [anon_sym_with_DASHwkd_DASHhash] = "with-wkd-hash",
  [anon_sym_with_DASHsecret] = "with-secret",
  [anon_sym_textmode] = "textmode",
  [anon_sym_no_DASHtextmode] = "no-textmode",
  [anon_sym_force_DASHocb] = "force-ocb",
  [anon_sym_force_DASHaead] = "force-aead",
  [anon_sym_disable_DASHsigner_DASHuid] = "disable-signer-uid",
  [anon_sym_include_DASHkey_DASHblock] = "include-key-block",
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = "no-include-key-block",
  [anon_sym_gnupg] = "gnupg",
  [anon_sym_openpgp] = "openpgp",
  [anon_sym_rfc4880] = "rfc4880",
  [anon_sym_rfc4880bis] = "rfc4880bis",
  [anon_sym_rfc2440] = "rfc2440",
  [anon_sym_pgp7] = "pgp7",
  [anon_sym_pgp8] = "pgp8",
  [anon_sym_list_DASHonly] = "list-only",
  [anon_sym_interactive] = "interactive",
  [anon_sym_debug_DASHall] = "debug-all",
  [anon_sym_debug_DASHiolbf] = "debug-iolbf",
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = "debug-allow-large-chunks",
  [anon_sym_debug_DASHignore_DASHexpiration] = "debug-ignore-expiration",
  [anon_sym_full_DASHtimestrings] = "full-timestrings",
  [anon_sym_enable_DASHprogress_DASHfilter] = "enable-progress-filter",
  [anon_sym_log_DASHtime] = "log-time",
  [anon_sym_no_DASHcomments] = "no-comments",
  [anon_sym_emit_DASHversion] = "emit-version",
  [anon_sym_no_DASHemit_DASHversion] = "no-emit-version",
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = "for-your-eyes-only",
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = "no-for-your-eyes-only",
  [anon_sym_use_DASHembedded_DASHfilename] = "use-embedded-filename",
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = "no-use-embedded-filename",
  [anon_sym_throw_DASHkeyids] = "throw-keyids",
  [anon_sym_no_DASHthrow_DASHkeyids] = "no-throw-keyids",
  [anon_sym_not_DASHdash_DASHescaped] = "not-dash-escaped",
  [anon_sym_escape_DASHfrom_DASHlines] = "escape-from-lines",
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = "no-escape-from-lines",
  [anon_sym_no_DASHsymkey_DASHcache] = "no-symkey-cache",
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = "allow-non-selfsigned-uid",
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = "no-allow-non-selfsigned-uid",
  [anon_sym_allow_DASHfreeform_DASHuid] = "allow-freeform-uid",
  [anon_sym_ignore_DASHtime_DASHconflict] = "ignore-time-conflict",
  [anon_sym_ignore_DASHvalid_DASHfrom] = "ignore-valid-from",
  [anon_sym_ignore_DASHcrc_DASHerror] = "ignore-crc-error",
  [anon_sym_ignore_DASHmdc_DASHerror] = "ignore-mdc-error",
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = "allow-old-cipher-algos",
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = "allow-weak-digest-algos",
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = "allow-weak-key-signatures",
  [anon_sym_override_DASHcompliance_DASHcheck] = "override-compliance-check",
  [anon_sym_no_DASHdefault_DASHkeyring] = "no-default-keyring",
  [anon_sym_no_DASHkeyring] = "no-keyring",
  [anon_sym_skip_DASHverify] = "skip-verify",
  [anon_sym_with_DASHkey_DASHdata] = "with-key-data",
  [anon_sym_list_DASHsignatures] = "list-signatures",
  [anon_sym_list_DASHsigs] = "list-sigs",
  [anon_sym_fast_DASHlist_DASHmode] = "fast-list-mode",
  [anon_sym_show_DASHsession_DASHkey] = "show-session-key",
  [anon_sym_ask_DASHsig_DASHexpire] = "ask-sig-expire",
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = "no-ask-sig-expire",
  [anon_sym_ask_DASHcert_DASHexpire] = "ask-cert-expire",
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = "no-ask-cert-expire",
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = "no-auto-trust-new-key",
  [anon_sym_force_DASHsign_DASHkey] = "force-sign-key",
  [anon_sym_forbid_DASHgen_DASHkey] = "forbid-gen-key",
  [anon_sym_enable_DASHspecial_DASHfilenames] = "enable-special-filenames",
  [anon_sym_preserve_DASHpermissions] = "preserve-permissions",
  [anon_sym_default_DASHkey] = "default-key",
  [anon_sym_list_DASHoptions] = "list-options",
  [anon_sym_COMMA] = ",",
  [sym__list_parameter] = "value",
  [anon_sym_verify_DASHoptions] = "verify-options",
  [sym__verify_parameter] = "value",
  [anon_sym_photo_DASHviewer] = "photo-viewer",
  [aux_sym__command_token1] = "_command_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__command_token2] = "_command_token2",
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = "\\${q}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__command_token3] = "_command_token3",
  [aux_sym__command_format_token1] = "format",
  [anon_sym_exec_DASHpath] = "exec-path",
  [anon_sym_keyring] = "keyring",
  [anon_sym_primary_DASHkeyring] = "primary-keyring",
  [anon_sym_trustdb_DASHname] = "trustdb-name",
  [anon_sym_display_DASHcharset] = "display-charset",
  [sym__charset_value] = "value",
  [sym__utf8_strings] = "_utf8_strings",
  [sym__no_utf8_strings] = "_no_utf8_strings",
  [anon_sym_compress_DASHlevel] = "compress-level",
  [aux_sym__compress_level_token1] = "number",
  [anon_sym_bzip2_DASHcompress_DASHlevel] = "bzip2-compress-level",
  [anon_sym_default_DASHcert_DASHlevel] = "default-cert-level",
  [aux_sym__default_cert_level_token1] = "number",
  [anon_sym_min_DASHcert_DASHlevel] = "min-cert-level",
  [anon_sym_trusted_DASHkey] = "trusted-key",
  [anon_sym_add_DASHdesig_DASHrevoker] = "add-desig-revoker",
  [aux_sym__add_desig_revoker_token1] = "sensitive:",
  [aux_sym__add_desig_revoker_token2] = "clear",
  [anon_sym_trust_DASHmodel] = "trust-model",
  [sym__model] = "value",
  [anon_sym_assert_DASHsigner] = "assert-signer",
  [anon_sym_auto_DASHkey_DASHlocate] = "auto-key-locate",
  [sym__key_locate_value] = "_key_locate_value",
  [anon_sym_keyid_DASHformat] = "keyid-format",
  [sym__keyid_format_value] = "value",
  [anon_sym_keyserver] = "keyserver",
  [anon_sym_completes_DASHneeded] = "completes-needed",
  [anon_sym_marginals_DASHneeded] = "marginals-needed",
  [anon_sym_tofu_DASHdefault_DASHpolicy] = "tofu-default-policy",
  [sym__tofu_policy_value] = "value",
  [anon_sym_max_DASHcert_DASHdepth] = "max-cert-depth",
  [anon_sym_agent_DASHprogram] = "agent-program",
  [anon_sym_dirmngr_DASHprogram] = "dirmngr-program",
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = "limit-card-insert-tries",
  [anon_sym_recipient] = "recipient",
  [anon_sym_hidden_DASHrecipient] = "hidden-recipient",
  [anon_sym_recipient_DASHfile] = "recipient-file",
  [anon_sym_hidden_DASHrecipient_DASHfile] = "hidden-recipient-file",
  [anon_sym_encrypt_DASHto] = "encrypt-to",
  [anon_sym_hidden_DASHencrypt_DASHto] = "hidden-encrypt-to",
  [anon_sym_group] = "group",
  [anon_sym_EQ] = "=",
  [anon_sym_ungroup] = "ungroup",
  [anon_sym_local_DASHuser] = "local-user",
  [anon_sym_sender] = "sender",
  [anon_sym_try_DASHsecret_DASHname] = "try-secret-name",
  [anon_sym_output] = "output",
  [anon_sym_max_DASHoutput] = "max-output",
  [anon_sym_chunk_DASHsize] = "chunk-size",
  [anon_sym_input_DASHsize_DASHhint] = "input-size-hint",
  [anon_sym_key_DASHorigin] = "key-origin",
  [sym__key_origin_value] = "value",
  [anon_sym_import_DASHoptions] = "import-options",
  [sym__import_parameter] = "value",
  [anon_sym_export_DASHoptions] = "export-options",
  [sym__export_parameter] = "value",
  [anon_sym_personal_DASHcipher_DASHpreferences] = "personal-cipher-preferences",
  [anon_sym_personal_DASHdigest_DASHpreferences] = "personal-digest-preferences",
  [anon_sym_personal_DASHcompress_DASHpreferences] = "personal-compress-preferences",
  [anon_sym_s2k_DASHcipher_DASHalgo] = "s2k-cipher-algo",
  [anon_sym_s2k_DASHdigest_DASHalgo] = "s2k-digest-algo",
  [anon_sym_s2k_DASHmode] = "s2k-mode",
  [aux_sym__s2k_mode_token1] = "number",
  [anon_sym_s2k_DASHcount] = "s2k-count",
  [anon_sym_compliance] = "compliance",
  [sym__compliance_value] = "value",
  [anon_sym_min_DASHrsa_DASHlength] = "min-rsa-length",
  [sym__require_compliance] = "_require_compliance",
  [anon_sym_debug_DASHlevel] = "debug-level",
  [sym__debug_level_value] = "value",
  [anon_sym_debug] = "debug",
  [aux_sym__debug_token1] = "number",
  [sym__debug_flag_value] = "value",
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = "debug-set-iobuf-size",
  [anon_sym_faked_DASHsystem_DASHtime] = "faked-system-time",
  [anon_sym_BANG] = "!",
  [anon_sym_status_DASHfd] = "status-fd",
  [anon_sym_status_DASHfile] = "status-file",
  [anon_sym_logger_DASHfd] = "logger-fd",
  [anon_sym_logger_DASHfile] = "logger-file",
  [anon_sym_log_DASHfile] = "log-file",
  [anon_sym_comment] = "comment",
  [anon_sym_sig_DASHnotation] = "sig-notation",
  [anon_sym_cert_DASHnotation] = "cert-notation",
  [anon_sym_set_DASHnotation] = "set-notation",
  [aux_sym__notation_format_token1] = "format",
  [anon_sym_known_DASHnotation] = "known-notation",
  [anon_sym_sig_DASHpolicy_DASHurl] = "sig-policy-url",
  [anon_sym_cert_DASHpolicy_DASHurl] = "cert-policy-url",
  [anon_sym_set_DASHpolicy_DASHurl] = "set-policy-url",
  [anon_sym_sig_DASHkeyserver_DASHurl] = "sig-keyserver-url",
  [anon_sym_set_DASHfilename] = "set-filename",
  [anon_sym_cipher_DASHalgo] = "cipher-algo",
  [anon_sym_digest_DASHalgo] = "digest-algo",
  [anon_sym_compress_DASHalgo] = "compress-algo",
  [anon_sym_cert_DASHdigest_DASHalgo] = "cert-digest-algo",
  [anon_sym_disable_DASHcipher_DASHalgo] = "disable-cipher-algo",
  [anon_sym_disable_DASHpubkey_DASHalgo] = "disable-pubkey-algo",
  [anon_sym_passphrase_DASHrepeat] = "passphrase-repeat",
  [anon_sym_passphrase_DASHfd] = "passphrase-fd",
  [anon_sym_passphrase_DASHfile] = "passphrase-file",
  [anon_sym_passphrase] = "passphrase",
  [anon_sym_pinentry_DASHmode] = "pinentry-mode",
  [sym__pinentry_mode_value] = "value",
  [anon_sym_request_DASHorigin] = "request-origin",
  [sym__request_origin_value] = "value",
  [anon_sym_command_DASHfd] = "command-fd",
  [anon_sym_command_DASHfile] = "command-file",
  [anon_sym_weak_DASHdigest] = "weak-digest",
  [anon_sym_override_DASHsession_DASHkey] = "override-session-key",
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = "override-session-key-fd",
  [anon_sym_default_DASHsig_DASHexpire] = "default-sig-expire",
  [anon_sym_default_DASHcert_DASHexpire] = "default-cert-expire",
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = "default-new-key-algo",
  [sym__new_key_algo] = "value",
  [anon_sym_default_DASHpreference_DASHlist] = "default-preference-list",
  [anon_sym_default_DASHkeyserver_DASHurl] = "default-keyserver-url",
  [anon_sym_chuid] = "chuid",
  [sym_key] = "key",
  [sym_url] = "url",
  [sym_number] = "number",
  [sym_iso_time] = "iso_time",
  [sym_expire_time] = "expire_time",
  [aux_sym_string_token1] = "content",
  [sym_comment] = "comment",
  [sym__pubkey_algo_value] = "_pubkey_algo_value",
  [sym__cipher_algo_value] = "_cipher_algo_value",
  [sym__hash_algo_value] = "_hash_algo_value",
  [sym__compression_algo_value] = "_compression_algo_value",
  [sym__space] = "_space",
  [sym_config] = "config",
  [sym_option] = "option",
  [sym__default_key] = "_default_key",
  [sym__list_options] = "_list_options",
  [sym__verify_options] = "_verify_options",
  [sym__photo_viewer] = "_photo_viewer",
  [sym__command] = "string",
  [sym__command_format] = "_command_format",
  [sym__exec_path] = "_exec_path",
  [sym__keyring] = "_keyring",
  [sym__primary_keyring] = "_primary_keyring",
  [sym__trustdb_name] = "_trustdb_name",
  [sym__display_charset] = "_display_charset",
  [sym__compress_level] = "_compress_level",
  [sym__bzip2_compress_level] = "_bzip2_compress_level",
  [sym__default_cert_level] = "_default_cert_level",
  [sym__min_cert_level] = "_min_cert_level",
  [sym__trusted_key] = "_trusted_key",
  [sym__add_desig_revoker] = "_add_desig_revoker",
  [sym__trust_model] = "_trust_model",
  [sym__assert_signer] = "_assert_signer",
  [sym__auto_key_locate] = "_auto_key_locate",
  [sym__keyid_format] = "_keyid_format",
  [sym__keyserver] = "_keyserver",
  [sym__completes_needed] = "_completes_needed",
  [sym__marginals_needed] = "_marginals_needed",
  [sym__tofu_default_policy] = "_tofu_default_policy",
  [sym__max_cert_depth] = "_max_cert_depth",
  [sym__agent_program] = "_agent_program",
  [sym__dirmngr_program] = "_dirmngr_program",
  [sym__limit_card_insert_tries] = "_limit_card_insert_tries",
  [sym__recipient] = "_recipient",
  [sym__hidden_recipient] = "_hidden_recipient",
  [sym__recipient_file] = "_recipient_file",
  [sym__hidden_recipient_file] = "_hidden_recipient_file",
  [sym__encrypt_to] = "_encrypt_to",
  [sym__hidden_encrypt_to] = "_hidden_encrypt_to",
  [sym__group] = "_group",
  [sym__ungroup] = "_ungroup",
  [sym__local_user] = "_local_user",
  [sym__sender] = "_sender",
  [sym__try_secret_name] = "_try_secret_name",
  [sym__output] = "_output",
  [sym__max_output] = "_max_output",
  [sym__chunk_size] = "_chunk_size",
  [sym__input_size_hint] = "_input_size_hint",
  [sym__key_origin] = "_key_origin",
  [sym__import_options] = "_import_options",
  [sym__export_options] = "_export_options",
  [sym__personal_cipher_preferences] = "_personal_cipher_preferences",
  [sym__personal_digest_preferences] = "_personal_digest_preferences",
  [sym__personal_compress_preferences] = "_personal_compress_preferences",
  [sym__s2k_cipher_algo] = "_s2k_cipher_algo",
  [sym__s2k_digest_algo] = "_s2k_digest_algo",
  [sym__s2k_mode] = "_s2k_mode",
  [sym__s2k_count] = "_s2k_count",
  [sym__compliance] = "_compliance",
  [sym__min_rsa_length] = "_min_rsa_length",
  [sym__debug_level] = "_debug_level",
  [sym__debug] = "_debug",
  [sym__debug_set_iobuf_size] = "_debug_set_iobuf_size",
  [sym__faked_system_time] = "_faked_system_time",
  [sym__status_fd] = "_status_fd",
  [sym__status_file] = "_status_file",
  [sym__logger_fd] = "_logger_fd",
  [sym__logger_file] = "_logger_file",
  [sym__comment] = "_comment",
  [sym__sig_notation] = "_sig_notation",
  [sym__cert_notation] = "_cert_notation",
  [sym__set_notation] = "_set_notation",
  [aux_sym__notation] = "_notation",
  [sym__notation_format] = "_notation_format",
  [sym__known_notation] = "_known_notation",
  [sym__sig_policy_url] = "_sig_policy_url",
  [sym__cert_policy_url] = "_cert_policy_url",
  [sym__set_policy_url] = "_set_policy_url",
  [sym__sig_keyserver_url] = "_sig_keyserver_url",
  [sym__set_filename] = "_set_filename",
  [sym__cipher_algo] = "_cipher_algo",
  [sym__digest_algo] = "_digest_algo",
  [sym__compress_algo] = "_compress_algo",
  [sym__cert_digest_algo] = "_cert_digest_algo",
  [sym__disable_cipher_algo] = "_disable_cipher_algo",
  [sym__disable_pubkey_algo] = "_disable_pubkey_algo",
  [sym__passphrase_repeat] = "_passphrase_repeat",
  [sym__passphrase_fd] = "_passphrase_fd",
  [sym__passphrase_file] = "_passphrase_file",
  [sym__passphrase] = "_passphrase",
  [sym__pinentry_mode] = "_pinentry_mode",
  [sym__request_origin] = "_request_origin",
  [sym__command_fd] = "_command_fd",
  [sym__command_file] = "_command_file",
  [sym__weak_digest] = "_weak_digest",
  [sym__override_session_key] = "_override_session_key",
  [sym__override_session_key_fd] = "_override_session_key_fd",
  [sym__default_sig_expire] = "_default_sig_expire",
  [sym__default_cert_expire] = "_default_cert_expire",
  [sym__default_new_key_algo] = "_default_new_key_algo",
  [sym__default_preference_list] = "_default_preference_list",
  [sym__default_preference_value] = "value",
  [sym__default_keyserver_url] = "_default_keyserver_url",
  [sym__chuid] = "_chuid",
  [sym_string] = "string",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym__list_options_repeat1] = "_list_options_repeat1",
  [aux_sym__verify_options_repeat1] = "_verify_options_repeat1",
  [aux_sym__command_repeat1] = "_command_repeat1",
  [aux_sym__command_repeat2] = "_command_repeat2",
  [aux_sym__command_repeat3] = "_command_repeat3",
  [aux_sym__auto_key_locate_repeat1] = "_auto_key_locate_repeat1",
  [aux_sym__import_options_repeat1] = "_import_options_repeat1",
  [aux_sym__export_options_repeat1] = "_export_options_repeat1",
  [aux_sym__personal_cipher_preferences_repeat1] = "_personal_cipher_preferences_repeat1",
  [aux_sym__personal_digest_preferences_repeat1] = "_personal_digest_preferences_repeat1",
  [aux_sym__personal_compress_preferences_repeat1] = "_personal_compress_preferences_repeat1",
  [aux_sym__debug_repeat1] = "_debug_repeat1",
  [aux_sym__default_new_key_algo_repeat1] = "_default_new_key_algo_repeat1",
  [aux_sym__default_preference_list_repeat1] = "_default_preference_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
  [anon_sym_default_DASHrecipient] = anon_sym_default_DASHrecipient,
  [anon_sym_default_DASHrecipient_DASHself] = anon_sym_default_DASHrecipient_DASHself,
  [anon_sym_no_DASHdefault_DASHrecipient] = anon_sym_no_DASHdefault_DASHrecipient,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_no_DASHtty] = anon_sym_no_DASHtty,
  [anon_sym_enable_DASHlarge_DASHrsa] = anon_sym_enable_DASHlarge_DASHrsa,
  [anon_sym_disable_DASHlarge_DASHrsa] = anon_sym_disable_DASHlarge_DASHrsa,
  [anon_sym_enable_DASHdsa2] = anon_sym_enable_DASHdsa2,
  [anon_sym_disable_DASHdsa2] = anon_sym_disable_DASHdsa2,
  [anon_sym_no_DASHcompress] = anon_sym_no_DASHcompress,
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = anon_sym_bzip2_DASHdecompress_DASHlowmem,
  [anon_sym_mangle_DASHdos_DASHfilenames] = anon_sym_mangle_DASHdos_DASHfilenames,
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = anon_sym_no_DASHmangle_DASHdos_DASHfilenames,
  [anon_sym_ask_DASHcert_DASHlevel] = anon_sym_ask_DASHcert_DASHlevel,
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = anon_sym_no_DASHask_DASHcert_DASHlevel,
  [anon_sym_always_DASHtrust] = anon_sym_always_DASHtrust,
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = anon_sym_no_DASHauto_DASHkey_DASHlocate,
  [anon_sym_auto_DASHkey_DASHimport] = anon_sym_auto_DASHkey_DASHimport,
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = anon_sym_no_DASHauto_DASHkey_DASHimport,
  [anon_sym_auto_DASHkey_DASHretrieve] = anon_sym_auto_DASHkey_DASHretrieve,
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = anon_sym_no_DASHauto_DASHkey_DASHretrieve,
  [anon_sym_no_DASHsig_DASHcache] = anon_sym_no_DASHsig_DASHcache,
  [anon_sym_auto_DASHcheck_DASHtrustdb] = anon_sym_auto_DASHcheck_DASHtrustdb,
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = anon_sym_no_DASHauto_DASHcheck_DASHtrustdb,
  [anon_sym_disable_DASHdirmngr] = anon_sym_disable_DASHdirmngr,
  [anon_sym_no_DASHautostart] = anon_sym_no_DASHautostart,
  [anon_sym_lock_DASHonce] = anon_sym_lock_DASHonce,
  [anon_sym_lock_DASHmultiple] = anon_sym_lock_DASHmultiple,
  [anon_sym_lock_DASHnever] = anon_sym_lock_DASHnever,
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror,
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = anon_sym_no_DASHrandom_DASHseed_DASHfile,
  [anon_sym_no_DASHgreeting] = anon_sym_no_DASHgreeting,
  [anon_sym_no_DASHsecmem_DASHwarning] = anon_sym_no_DASHsecmem_DASHwarning,
  [anon_sym_no_DASHpermission_DASHwarning] = anon_sym_no_DASHpermission_DASHwarning,
  [anon_sym_require_DASHsecmem] = anon_sym_require_DASHsecmem,
  [anon_sym_no_DASHrequire_DASHsecmem] = anon_sym_no_DASHrequire_DASHsecmem,
  [anon_sym_require_DASHcross_DASHverification] = anon_sym_require_DASHcross_DASHverification,
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = anon_sym_no_DASHrequire_DASHcross_DASHverification,
  [anon_sym_expert] = anon_sym_expert,
  [anon_sym_no_DASHexpert] = anon_sym_no_DASHexpert,
  [anon_sym_no_DASHencrypt_DASHto] = anon_sym_no_DASHencrypt_DASHto,
  [anon_sym_no_DASHgroups] = anon_sym_no_DASHgroups,
  [anon_sym_try_DASHall_DASHsecrets] = anon_sym_try_DASHall_DASHsecrets,
  [anon_sym_skip_DASHhidden_DASHrecipients] = anon_sym_skip_DASHhidden_DASHrecipients,
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = anon_sym_no_DASHskip_DASHhidden_DASHrecipients,
  [anon_sym_armor] = anon_sym_armor,
  [anon_sym_no_DASHarmor] = anon_sym_no_DASHarmor,
  [anon_sym_with_DASHcolons] = anon_sym_with_DASHcolons,
  [anon_sym_legacy_DASHlist_DASHmode] = anon_sym_legacy_DASHlist_DASHmode,
  [anon_sym_with_DASHfingerprint] = anon_sym_with_DASHfingerprint,
  [anon_sym_with_DASHsubkey_DASHfingerprint] = anon_sym_with_DASHsubkey_DASHfingerprint,
  [anon_sym_with_DASHicao_DASHspelling] = anon_sym_with_DASHicao_DASHspelling,
  [anon_sym_with_DASHkeygrip] = anon_sym_with_DASHkeygrip,
  [anon_sym_with_DASHkey_DASHorigin] = anon_sym_with_DASHkey_DASHorigin,
  [anon_sym_with_DASHwkd_DASHhash] = anon_sym_with_DASHwkd_DASHhash,
  [anon_sym_with_DASHsecret] = anon_sym_with_DASHsecret,
  [anon_sym_textmode] = anon_sym_textmode,
  [anon_sym_no_DASHtextmode] = anon_sym_no_DASHtextmode,
  [anon_sym_force_DASHocb] = anon_sym_force_DASHocb,
  [anon_sym_force_DASHaead] = anon_sym_force_DASHaead,
  [anon_sym_disable_DASHsigner_DASHuid] = anon_sym_disable_DASHsigner_DASHuid,
  [anon_sym_include_DASHkey_DASHblock] = anon_sym_include_DASHkey_DASHblock,
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = anon_sym_no_DASHinclude_DASHkey_DASHblock,
  [anon_sym_gnupg] = anon_sym_gnupg,
  [anon_sym_openpgp] = anon_sym_openpgp,
  [anon_sym_rfc4880] = anon_sym_rfc4880,
  [anon_sym_rfc4880bis] = anon_sym_rfc4880bis,
  [anon_sym_rfc2440] = anon_sym_rfc2440,
  [anon_sym_pgp7] = anon_sym_pgp7,
  [anon_sym_pgp8] = anon_sym_pgp8,
  [anon_sym_list_DASHonly] = anon_sym_list_DASHonly,
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_debug_DASHall] = anon_sym_debug_DASHall,
  [anon_sym_debug_DASHiolbf] = anon_sym_debug_DASHiolbf,
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = anon_sym_debug_DASHallow_DASHlarge_DASHchunks,
  [anon_sym_debug_DASHignore_DASHexpiration] = anon_sym_debug_DASHignore_DASHexpiration,
  [anon_sym_full_DASHtimestrings] = anon_sym_full_DASHtimestrings,
  [anon_sym_enable_DASHprogress_DASHfilter] = anon_sym_enable_DASHprogress_DASHfilter,
  [anon_sym_log_DASHtime] = anon_sym_log_DASHtime,
  [anon_sym_no_DASHcomments] = anon_sym_no_DASHcomments,
  [anon_sym_emit_DASHversion] = anon_sym_emit_DASHversion,
  [anon_sym_no_DASHemit_DASHversion] = anon_sym_no_DASHemit_DASHversion,
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = anon_sym_for_DASHyour_DASHeyes_DASHonly,
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly,
  [anon_sym_use_DASHembedded_DASHfilename] = anon_sym_use_DASHembedded_DASHfilename,
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = anon_sym_no_DASHuse_DASHembedded_DASHfilename,
  [anon_sym_throw_DASHkeyids] = anon_sym_throw_DASHkeyids,
  [anon_sym_no_DASHthrow_DASHkeyids] = anon_sym_no_DASHthrow_DASHkeyids,
  [anon_sym_not_DASHdash_DASHescaped] = anon_sym_not_DASHdash_DASHescaped,
  [anon_sym_escape_DASHfrom_DASHlines] = anon_sym_escape_DASHfrom_DASHlines,
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = anon_sym_no_DASHescape_DASHfrom_DASHlines,
  [anon_sym_no_DASHsymkey_DASHcache] = anon_sym_no_DASHsymkey_DASHcache,
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = anon_sym_allow_DASHnon_DASHselfsigned_DASHuid,
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid,
  [anon_sym_allow_DASHfreeform_DASHuid] = anon_sym_allow_DASHfreeform_DASHuid,
  [anon_sym_ignore_DASHtime_DASHconflict] = anon_sym_ignore_DASHtime_DASHconflict,
  [anon_sym_ignore_DASHvalid_DASHfrom] = anon_sym_ignore_DASHvalid_DASHfrom,
  [anon_sym_ignore_DASHcrc_DASHerror] = anon_sym_ignore_DASHcrc_DASHerror,
  [anon_sym_ignore_DASHmdc_DASHerror] = anon_sym_ignore_DASHmdc_DASHerror,
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = anon_sym_allow_DASHold_DASHcipher_DASHalgos,
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = anon_sym_allow_DASHweak_DASHdigest_DASHalgos,
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = anon_sym_allow_DASHweak_DASHkey_DASHsignatures,
  [anon_sym_override_DASHcompliance_DASHcheck] = anon_sym_override_DASHcompliance_DASHcheck,
  [anon_sym_no_DASHdefault_DASHkeyring] = anon_sym_no_DASHdefault_DASHkeyring,
  [anon_sym_no_DASHkeyring] = anon_sym_no_DASHkeyring,
  [anon_sym_skip_DASHverify] = anon_sym_skip_DASHverify,
  [anon_sym_with_DASHkey_DASHdata] = anon_sym_with_DASHkey_DASHdata,
  [anon_sym_list_DASHsignatures] = anon_sym_list_DASHsignatures,
  [anon_sym_list_DASHsigs] = anon_sym_list_DASHsigs,
  [anon_sym_fast_DASHlist_DASHmode] = anon_sym_fast_DASHlist_DASHmode,
  [anon_sym_show_DASHsession_DASHkey] = anon_sym_show_DASHsession_DASHkey,
  [anon_sym_ask_DASHsig_DASHexpire] = anon_sym_ask_DASHsig_DASHexpire,
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = anon_sym_no_DASHask_DASHsig_DASHexpire,
  [anon_sym_ask_DASHcert_DASHexpire] = anon_sym_ask_DASHcert_DASHexpire,
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = anon_sym_no_DASHask_DASHcert_DASHexpire,
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey,
  [anon_sym_force_DASHsign_DASHkey] = anon_sym_force_DASHsign_DASHkey,
  [anon_sym_forbid_DASHgen_DASHkey] = anon_sym_forbid_DASHgen_DASHkey,
  [anon_sym_enable_DASHspecial_DASHfilenames] = anon_sym_enable_DASHspecial_DASHfilenames,
  [anon_sym_preserve_DASHpermissions] = anon_sym_preserve_DASHpermissions,
  [anon_sym_default_DASHkey] = anon_sym_default_DASHkey,
  [anon_sym_list_DASHoptions] = anon_sym_list_DASHoptions,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__list_parameter] = sym__list_parameter,
  [anon_sym_verify_DASHoptions] = anon_sym_verify_DASHoptions,
  [sym__verify_parameter] = sym__list_parameter,
  [anon_sym_photo_DASHviewer] = anon_sym_photo_DASHviewer,
  [aux_sym__command_token1] = aux_sym__command_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__command_token2] = aux_sym__command_token2,
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__command_token3] = aux_sym__command_token3,
  [aux_sym__command_format_token1] = aux_sym__command_format_token1,
  [anon_sym_exec_DASHpath] = anon_sym_exec_DASHpath,
  [anon_sym_keyring] = anon_sym_keyring,
  [anon_sym_primary_DASHkeyring] = anon_sym_primary_DASHkeyring,
  [anon_sym_trustdb_DASHname] = anon_sym_trustdb_DASHname,
  [anon_sym_display_DASHcharset] = anon_sym_display_DASHcharset,
  [sym__charset_value] = sym__list_parameter,
  [sym__utf8_strings] = sym__utf8_strings,
  [sym__no_utf8_strings] = sym__no_utf8_strings,
  [anon_sym_compress_DASHlevel] = anon_sym_compress_DASHlevel,
  [aux_sym__compress_level_token1] = sym_number,
  [anon_sym_bzip2_DASHcompress_DASHlevel] = anon_sym_bzip2_DASHcompress_DASHlevel,
  [anon_sym_default_DASHcert_DASHlevel] = anon_sym_default_DASHcert_DASHlevel,
  [aux_sym__default_cert_level_token1] = sym_number,
  [anon_sym_min_DASHcert_DASHlevel] = anon_sym_min_DASHcert_DASHlevel,
  [anon_sym_trusted_DASHkey] = anon_sym_trusted_DASHkey,
  [anon_sym_add_DASHdesig_DASHrevoker] = anon_sym_add_DASHdesig_DASHrevoker,
  [aux_sym__add_desig_revoker_token1] = aux_sym__add_desig_revoker_token1,
  [aux_sym__add_desig_revoker_token2] = aux_sym__add_desig_revoker_token2,
  [anon_sym_trust_DASHmodel] = anon_sym_trust_DASHmodel,
  [sym__model] = sym__list_parameter,
  [anon_sym_assert_DASHsigner] = anon_sym_assert_DASHsigner,
  [anon_sym_auto_DASHkey_DASHlocate] = anon_sym_auto_DASHkey_DASHlocate,
  [sym__key_locate_value] = sym__key_locate_value,
  [anon_sym_keyid_DASHformat] = anon_sym_keyid_DASHformat,
  [sym__keyid_format_value] = sym__list_parameter,
  [anon_sym_keyserver] = anon_sym_keyserver,
  [anon_sym_completes_DASHneeded] = anon_sym_completes_DASHneeded,
  [anon_sym_marginals_DASHneeded] = anon_sym_marginals_DASHneeded,
  [anon_sym_tofu_DASHdefault_DASHpolicy] = anon_sym_tofu_DASHdefault_DASHpolicy,
  [sym__tofu_policy_value] = sym__list_parameter,
  [anon_sym_max_DASHcert_DASHdepth] = anon_sym_max_DASHcert_DASHdepth,
  [anon_sym_agent_DASHprogram] = anon_sym_agent_DASHprogram,
  [anon_sym_dirmngr_DASHprogram] = anon_sym_dirmngr_DASHprogram,
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = anon_sym_limit_DASHcard_DASHinsert_DASHtries,
  [anon_sym_recipient] = anon_sym_recipient,
  [anon_sym_hidden_DASHrecipient] = anon_sym_hidden_DASHrecipient,
  [anon_sym_recipient_DASHfile] = anon_sym_recipient_DASHfile,
  [anon_sym_hidden_DASHrecipient_DASHfile] = anon_sym_hidden_DASHrecipient_DASHfile,
  [anon_sym_encrypt_DASHto] = anon_sym_encrypt_DASHto,
  [anon_sym_hidden_DASHencrypt_DASHto] = anon_sym_hidden_DASHencrypt_DASHto,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ungroup] = anon_sym_ungroup,
  [anon_sym_local_DASHuser] = anon_sym_local_DASHuser,
  [anon_sym_sender] = anon_sym_sender,
  [anon_sym_try_DASHsecret_DASHname] = anon_sym_try_DASHsecret_DASHname,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_max_DASHoutput] = anon_sym_max_DASHoutput,
  [anon_sym_chunk_DASHsize] = anon_sym_chunk_DASHsize,
  [anon_sym_input_DASHsize_DASHhint] = anon_sym_input_DASHsize_DASHhint,
  [anon_sym_key_DASHorigin] = anon_sym_key_DASHorigin,
  [sym__key_origin_value] = sym__list_parameter,
  [anon_sym_import_DASHoptions] = anon_sym_import_DASHoptions,
  [sym__import_parameter] = sym__list_parameter,
  [anon_sym_export_DASHoptions] = anon_sym_export_DASHoptions,
  [sym__export_parameter] = sym__list_parameter,
  [anon_sym_personal_DASHcipher_DASHpreferences] = anon_sym_personal_DASHcipher_DASHpreferences,
  [anon_sym_personal_DASHdigest_DASHpreferences] = anon_sym_personal_DASHdigest_DASHpreferences,
  [anon_sym_personal_DASHcompress_DASHpreferences] = anon_sym_personal_DASHcompress_DASHpreferences,
  [anon_sym_s2k_DASHcipher_DASHalgo] = anon_sym_s2k_DASHcipher_DASHalgo,
  [anon_sym_s2k_DASHdigest_DASHalgo] = anon_sym_s2k_DASHdigest_DASHalgo,
  [anon_sym_s2k_DASHmode] = anon_sym_s2k_DASHmode,
  [aux_sym__s2k_mode_token1] = sym_number,
  [anon_sym_s2k_DASHcount] = anon_sym_s2k_DASHcount,
  [anon_sym_compliance] = anon_sym_compliance,
  [sym__compliance_value] = sym__list_parameter,
  [anon_sym_min_DASHrsa_DASHlength] = anon_sym_min_DASHrsa_DASHlength,
  [sym__require_compliance] = sym__require_compliance,
  [anon_sym_debug_DASHlevel] = anon_sym_debug_DASHlevel,
  [sym__debug_level_value] = sym__list_parameter,
  [anon_sym_debug] = anon_sym_debug,
  [aux_sym__debug_token1] = sym_number,
  [sym__debug_flag_value] = sym__list_parameter,
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = anon_sym_debug_DASHset_DASHiobuf_DASHsize,
  [anon_sym_faked_DASHsystem_DASHtime] = anon_sym_faked_DASHsystem_DASHtime,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_status_DASHfd] = anon_sym_status_DASHfd,
  [anon_sym_status_DASHfile] = anon_sym_status_DASHfile,
  [anon_sym_logger_DASHfd] = anon_sym_logger_DASHfd,
  [anon_sym_logger_DASHfile] = anon_sym_logger_DASHfile,
  [anon_sym_log_DASHfile] = anon_sym_log_DASHfile,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_sig_DASHnotation] = anon_sym_sig_DASHnotation,
  [anon_sym_cert_DASHnotation] = anon_sym_cert_DASHnotation,
  [anon_sym_set_DASHnotation] = anon_sym_set_DASHnotation,
  [aux_sym__notation_format_token1] = aux_sym__command_format_token1,
  [anon_sym_known_DASHnotation] = anon_sym_known_DASHnotation,
  [anon_sym_sig_DASHpolicy_DASHurl] = anon_sym_sig_DASHpolicy_DASHurl,
  [anon_sym_cert_DASHpolicy_DASHurl] = anon_sym_cert_DASHpolicy_DASHurl,
  [anon_sym_set_DASHpolicy_DASHurl] = anon_sym_set_DASHpolicy_DASHurl,
  [anon_sym_sig_DASHkeyserver_DASHurl] = anon_sym_sig_DASHkeyserver_DASHurl,
  [anon_sym_set_DASHfilename] = anon_sym_set_DASHfilename,
  [anon_sym_cipher_DASHalgo] = anon_sym_cipher_DASHalgo,
  [anon_sym_digest_DASHalgo] = anon_sym_digest_DASHalgo,
  [anon_sym_compress_DASHalgo] = anon_sym_compress_DASHalgo,
  [anon_sym_cert_DASHdigest_DASHalgo] = anon_sym_cert_DASHdigest_DASHalgo,
  [anon_sym_disable_DASHcipher_DASHalgo] = anon_sym_disable_DASHcipher_DASHalgo,
  [anon_sym_disable_DASHpubkey_DASHalgo] = anon_sym_disable_DASHpubkey_DASHalgo,
  [anon_sym_passphrase_DASHrepeat] = anon_sym_passphrase_DASHrepeat,
  [anon_sym_passphrase_DASHfd] = anon_sym_passphrase_DASHfd,
  [anon_sym_passphrase_DASHfile] = anon_sym_passphrase_DASHfile,
  [anon_sym_passphrase] = anon_sym_passphrase,
  [anon_sym_pinentry_DASHmode] = anon_sym_pinentry_DASHmode,
  [sym__pinentry_mode_value] = sym__list_parameter,
  [anon_sym_request_DASHorigin] = anon_sym_request_DASHorigin,
  [sym__request_origin_value] = sym__list_parameter,
  [anon_sym_command_DASHfd] = anon_sym_command_DASHfd,
  [anon_sym_command_DASHfile] = anon_sym_command_DASHfile,
  [anon_sym_weak_DASHdigest] = anon_sym_weak_DASHdigest,
  [anon_sym_override_DASHsession_DASHkey] = anon_sym_override_DASHsession_DASHkey,
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = anon_sym_override_DASHsession_DASHkey_DASHfd,
  [anon_sym_default_DASHsig_DASHexpire] = anon_sym_default_DASHsig_DASHexpire,
  [anon_sym_default_DASHcert_DASHexpire] = anon_sym_default_DASHcert_DASHexpire,
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = anon_sym_default_DASHnew_DASHkey_DASHalgo,
  [sym__new_key_algo] = sym__list_parameter,
  [anon_sym_default_DASHpreference_DASHlist] = anon_sym_default_DASHpreference_DASHlist,
  [anon_sym_default_DASHkeyserver_DASHurl] = anon_sym_default_DASHkeyserver_DASHurl,
  [anon_sym_chuid] = anon_sym_chuid,
  [sym_key] = sym_key,
  [sym_url] = sym_url,
  [sym_number] = sym_number,
  [sym_iso_time] = sym_iso_time,
  [sym_expire_time] = sym_expire_time,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_comment] = sym_comment,
  [sym__pubkey_algo_value] = sym__pubkey_algo_value,
  [sym__cipher_algo_value] = sym__cipher_algo_value,
  [sym__hash_algo_value] = sym__hash_algo_value,
  [sym__compression_algo_value] = sym__compression_algo_value,
  [sym__space] = sym__space,
  [sym_config] = sym_config,
  [sym_option] = sym_option,
  [sym__default_key] = sym__default_key,
  [sym__list_options] = sym__list_options,
  [sym__verify_options] = sym__verify_options,
  [sym__photo_viewer] = sym__photo_viewer,
  [sym__command] = sym_string,
  [sym__command_format] = sym__command_format,
  [sym__exec_path] = sym__exec_path,
  [sym__keyring] = sym__keyring,
  [sym__primary_keyring] = sym__primary_keyring,
  [sym__trustdb_name] = sym__trustdb_name,
  [sym__display_charset] = sym__display_charset,
  [sym__compress_level] = sym__compress_level,
  [sym__bzip2_compress_level] = sym__bzip2_compress_level,
  [sym__default_cert_level] = sym__default_cert_level,
  [sym__min_cert_level] = sym__min_cert_level,
  [sym__trusted_key] = sym__trusted_key,
  [sym__add_desig_revoker] = sym__add_desig_revoker,
  [sym__trust_model] = sym__trust_model,
  [sym__assert_signer] = sym__assert_signer,
  [sym__auto_key_locate] = sym__auto_key_locate,
  [sym__keyid_format] = sym__keyid_format,
  [sym__keyserver] = sym__keyserver,
  [sym__completes_needed] = sym__completes_needed,
  [sym__marginals_needed] = sym__marginals_needed,
  [sym__tofu_default_policy] = sym__tofu_default_policy,
  [sym__max_cert_depth] = sym__max_cert_depth,
  [sym__agent_program] = sym__agent_program,
  [sym__dirmngr_program] = sym__dirmngr_program,
  [sym__limit_card_insert_tries] = sym__limit_card_insert_tries,
  [sym__recipient] = sym__recipient,
  [sym__hidden_recipient] = sym__hidden_recipient,
  [sym__recipient_file] = sym__recipient_file,
  [sym__hidden_recipient_file] = sym__hidden_recipient_file,
  [sym__encrypt_to] = sym__encrypt_to,
  [sym__hidden_encrypt_to] = sym__hidden_encrypt_to,
  [sym__group] = sym__group,
  [sym__ungroup] = sym__ungroup,
  [sym__local_user] = sym__local_user,
  [sym__sender] = sym__sender,
  [sym__try_secret_name] = sym__try_secret_name,
  [sym__output] = sym__output,
  [sym__max_output] = sym__max_output,
  [sym__chunk_size] = sym__chunk_size,
  [sym__input_size_hint] = sym__input_size_hint,
  [sym__key_origin] = sym__key_origin,
  [sym__import_options] = sym__import_options,
  [sym__export_options] = sym__export_options,
  [sym__personal_cipher_preferences] = sym__personal_cipher_preferences,
  [sym__personal_digest_preferences] = sym__personal_digest_preferences,
  [sym__personal_compress_preferences] = sym__personal_compress_preferences,
  [sym__s2k_cipher_algo] = sym__s2k_cipher_algo,
  [sym__s2k_digest_algo] = sym__s2k_digest_algo,
  [sym__s2k_mode] = sym__s2k_mode,
  [sym__s2k_count] = sym__s2k_count,
  [sym__compliance] = sym__compliance,
  [sym__min_rsa_length] = sym__min_rsa_length,
  [sym__debug_level] = sym__debug_level,
  [sym__debug] = sym__debug,
  [sym__debug_set_iobuf_size] = sym__debug_set_iobuf_size,
  [sym__faked_system_time] = sym__faked_system_time,
  [sym__status_fd] = sym__status_fd,
  [sym__status_file] = sym__status_file,
  [sym__logger_fd] = sym__logger_fd,
  [sym__logger_file] = sym__logger_file,
  [sym__comment] = sym__comment,
  [sym__sig_notation] = sym__sig_notation,
  [sym__cert_notation] = sym__cert_notation,
  [sym__set_notation] = sym__set_notation,
  [aux_sym__notation] = aux_sym__notation,
  [sym__notation_format] = sym__notation_format,
  [sym__known_notation] = sym__known_notation,
  [sym__sig_policy_url] = sym__sig_policy_url,
  [sym__cert_policy_url] = sym__cert_policy_url,
  [sym__set_policy_url] = sym__set_policy_url,
  [sym__sig_keyserver_url] = sym__sig_keyserver_url,
  [sym__set_filename] = sym__set_filename,
  [sym__cipher_algo] = sym__cipher_algo,
  [sym__digest_algo] = sym__digest_algo,
  [sym__compress_algo] = sym__compress_algo,
  [sym__cert_digest_algo] = sym__cert_digest_algo,
  [sym__disable_cipher_algo] = sym__disable_cipher_algo,
  [sym__disable_pubkey_algo] = sym__disable_pubkey_algo,
  [sym__passphrase_repeat] = sym__passphrase_repeat,
  [sym__passphrase_fd] = sym__passphrase_fd,
  [sym__passphrase_file] = sym__passphrase_file,
  [sym__passphrase] = sym__passphrase,
  [sym__pinentry_mode] = sym__pinentry_mode,
  [sym__request_origin] = sym__request_origin,
  [sym__command_fd] = sym__command_fd,
  [sym__command_file] = sym__command_file,
  [sym__weak_digest] = sym__weak_digest,
  [sym__override_session_key] = sym__override_session_key,
  [sym__override_session_key_fd] = sym__override_session_key_fd,
  [sym__default_sig_expire] = sym__default_sig_expire,
  [sym__default_cert_expire] = sym__default_cert_expire,
  [sym__default_new_key_algo] = sym__default_new_key_algo,
  [sym__default_preference_list] = sym__default_preference_list,
  [sym__default_preference_value] = sym__list_parameter,
  [sym__default_keyserver_url] = sym__default_keyserver_url,
  [sym__chuid] = sym__chuid,
  [sym_string] = sym_string,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym__list_options_repeat1] = aux_sym__list_options_repeat1,
  [aux_sym__verify_options_repeat1] = aux_sym__verify_options_repeat1,
  [aux_sym__command_repeat1] = aux_sym__command_repeat1,
  [aux_sym__command_repeat2] = aux_sym__command_repeat2,
  [aux_sym__command_repeat3] = aux_sym__command_repeat3,
  [aux_sym__auto_key_locate_repeat1] = aux_sym__auto_key_locate_repeat1,
  [aux_sym__import_options_repeat1] = aux_sym__import_options_repeat1,
  [aux_sym__export_options_repeat1] = aux_sym__export_options_repeat1,
  [aux_sym__personal_cipher_preferences_repeat1] = aux_sym__personal_cipher_preferences_repeat1,
  [aux_sym__personal_digest_preferences_repeat1] = aux_sym__personal_digest_preferences_repeat1,
  [aux_sym__personal_compress_preferences_repeat1] = aux_sym__personal_compress_preferences_repeat1,
  [aux_sym__debug_repeat1] = aux_sym__debug_repeat1,
  [aux_sym__default_new_key_algo_repeat1] = aux_sym__default_new_key_algo_repeat1,
  [aux_sym__default_preference_list_repeat1] = aux_sym__default_preference_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_default_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHrecipient_DASHself] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHdefault_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHtty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHlarge_DASHrsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHlarge_DASHrsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHdsa2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHdsa2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcompress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mangle_DASHdos_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always_DASHtrust] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHretrieve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsig_DASHcache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHcheck_DASHtrustdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHdirmngr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHautostart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHmultiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHnever] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHgreeting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsecmem_DASHwarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHpermission_DASHwarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require_DASHsecmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrequire_DASHsecmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require_DASHcross_DASHverification] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHexpert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHencrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHgroups] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try_DASHall_DASHsecrets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip_DASHhidden_DASHrecipients] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_armor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHarmor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHcolons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_legacy_DASHlist_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHfingerprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHsubkey_DASHfingerprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHicao_DASHspelling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkeygrip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkey_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHwkd_DASHhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHsecret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHtextmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHocb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHaead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHsigner_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include_DASHkey_DASHblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gnupg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_openpgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc4880] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc4880bis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc2440] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHiolbf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHignore_DASHexpiration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_full_DASHtimestrings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHprogress_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcomments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit_DASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHemit_DASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_DASHembedded_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw_DASHkeyids] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHthrow_DASHkeyids] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_DASHdash_DASHescaped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape_DASHfrom_DASHlines] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsymkey_DASHcache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHfreeform_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHtime_DASHconflict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHvalid_DASHfrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHcrc_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHmdc_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHcompliance_DASHcheck] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHdefault_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip_DASHverify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkey_DASHdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHsignatures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHsigs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fast_DASHlist_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show_DASHsession_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHsign_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forbid_DASHgen_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHspecial_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preserve_DASHpermissions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__list_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_verify_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__verify_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_photo_DASHviewer] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__command_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__command_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_format_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec_DASHpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primary_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trustdb_DASHname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display_DASHcharset] = {
    .visible = true,
    .named = false,
  },
  [sym__charset_value] = {
    .visible = true,
    .named = true,
  },
  [sym__utf8_strings] = {
    .visible = false,
    .named = true,
  },
  [sym__no_utf8_strings] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_compress_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__compress_level_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bzip2_DASHcompress_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__default_cert_level_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_min_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trusted_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHdesig_DASHrevoker] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_desig_revoker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_desig_revoker_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trust_DASHmodel] = {
    .visible = true,
    .named = false,
  },
  [sym__model] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert_DASHsigner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHlocate] = {
    .visible = true,
    .named = false,
  },
  [sym__key_locate_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_keyid_DASHformat] = {
    .visible = true,
    .named = false,
  },
  [sym__keyid_format_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_keyserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_completes_DASHneeded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_marginals_DASHneeded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tofu_DASHdefault_DASHpolicy] = {
    .visible = true,
    .named = false,
  },
  [sym__tofu_policy_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_max_DASHcert_DASHdepth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_agent_DASHprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dirmngr_DASHprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recipient_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHrecipient_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHencrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ungroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_DASHuser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sender] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try_DASHsecret_DASHname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHoutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chunk_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input_DASHsize_DASHhint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [sym__key_origin_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__import_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__export_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_personal_DASHcipher_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_personal_DASHdigest_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_personal_DASHcompress_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHcipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHdigest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__s2k_mode_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s2k_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compliance] = {
    .visible = true,
    .named = false,
  },
  [sym__compliance_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_min_DASHrsa_DASHlength] = {
    .visible = true,
    .named = false,
  },
  [sym__require_compliance] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_debug_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [sym__debug_level_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__debug_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__debug_flag_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_faked_DASHsystem_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logger_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logger_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__notation_format_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_known_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig_DASHkeyserver_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_digest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compress_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHdigest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHcipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHpubkey_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHrepeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinentry_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [sym__pinentry_mode_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_request_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [sym__request_origin_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_command_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak_DASHdigest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHsession_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [sym__new_key_algo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default_DASHpreference_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHkeyserver_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chuid] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_iso_time] = {
    .visible = true,
    .named = true,
  },
  [sym_expire_time] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__pubkey_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__cipher_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__compression_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__default_key] = {
    .visible = false,
    .named = true,
  },
  [sym__list_options] = {
    .visible = false,
    .named = true,
  },
  [sym__verify_options] = {
    .visible = false,
    .named = true,
  },
  [sym__photo_viewer] = {
    .visible = false,
    .named = true,
  },
  [sym__command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_format] = {
    .visible = false,
    .named = true,
  },
  [sym__exec_path] = {
    .visible = false,
    .named = true,
  },
  [sym__keyring] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_keyring] = {
    .visible = false,
    .named = true,
  },
  [sym__trustdb_name] = {
    .visible = false,
    .named = true,
  },
  [sym__display_charset] = {
    .visible = false,
    .named = true,
  },
  [sym__compress_level] = {
    .visible = false,
    .named = true,
  },
  [sym__bzip2_compress_level] = {
    .visible = false,
    .named = true,
  },
  [sym__default_cert_level] = {
    .visible = false,
    .named = true,
  },
  [sym__min_cert_level] = {
    .visible = false,
    .named = true,
  },
  [sym__trusted_key] = {
    .visible = false,
    .named = true,
  },
  [sym__add_desig_revoker] = {
    .visible = false,
    .named = true,
  },
  [sym__trust_model] = {
    .visible = false,
    .named = true,
  },
  [sym__assert_signer] = {
    .visible = false,
    .named = true,
  },
  [sym__auto_key_locate] = {
    .visible = false,
    .named = true,
  },
  [sym__keyid_format] = {
    .visible = false,
    .named = true,
  },
  [sym__keyserver] = {
    .visible = false,
    .named = true,
  },
  [sym__completes_needed] = {
    .visible = false,
    .named = true,
  },
  [sym__marginals_needed] = {
    .visible = false,
    .named = true,
  },
  [sym__tofu_default_policy] = {
    .visible = false,
    .named = true,
  },
  [sym__max_cert_depth] = {
    .visible = false,
    .named = true,
  },
  [sym__agent_program] = {
    .visible = false,
    .named = true,
  },
  [sym__dirmngr_program] = {
    .visible = false,
    .named = true,
  },
  [sym__limit_card_insert_tries] = {
    .visible = false,
    .named = true,
  },
  [sym__recipient] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_recipient] = {
    .visible = false,
    .named = true,
  },
  [sym__recipient_file] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_recipient_file] = {
    .visible = false,
    .named = true,
  },
  [sym__encrypt_to] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_encrypt_to] = {
    .visible = false,
    .named = true,
  },
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym__ungroup] = {
    .visible = false,
    .named = true,
  },
  [sym__local_user] = {
    .visible = false,
    .named = true,
  },
  [sym__sender] = {
    .visible = false,
    .named = true,
  },
  [sym__try_secret_name] = {
    .visible = false,
    .named = true,
  },
  [sym__output] = {
    .visible = false,
    .named = true,
  },
  [sym__max_output] = {
    .visible = false,
    .named = true,
  },
  [sym__chunk_size] = {
    .visible = false,
    .named = true,
  },
  [sym__input_size_hint] = {
    .visible = false,
    .named = true,
  },
  [sym__key_origin] = {
    .visible = false,
    .named = true,
  },
  [sym__import_options] = {
    .visible = false,
    .named = true,
  },
  [sym__export_options] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_cipher_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_digest_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_compress_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_count] = {
    .visible = false,
    .named = true,
  },
  [sym__compliance] = {
    .visible = false,
    .named = true,
  },
  [sym__min_rsa_length] = {
    .visible = false,
    .named = true,
  },
  [sym__debug_level] = {
    .visible = false,
    .named = true,
  },
  [sym__debug] = {
    .visible = false,
    .named = true,
  },
  [sym__debug_set_iobuf_size] = {
    .visible = false,
    .named = true,
  },
  [sym__faked_system_time] = {
    .visible = false,
    .named = true,
  },
  [sym__status_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__status_file] = {
    .visible = false,
    .named = true,
  },
  [sym__logger_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__logger_file] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__sig_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__set_notation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__notation] = {
    .visible = false,
    .named = false,
  },
  [sym__notation_format] = {
    .visible = false,
    .named = true,
  },
  [sym__known_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__sig_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__set_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__sig_keyserver_url] = {
    .visible = false,
    .named = true,
  },
  [sym__set_filename] = {
    .visible = false,
    .named = true,
  },
  [sym__cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__compress_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__disable_cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__disable_pubkey_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_repeat] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_file] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase] = {
    .visible = false,
    .named = true,
  },
  [sym__pinentry_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__request_origin] = {
    .visible = false,
    .named = true,
  },
  [sym__command_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__command_file] = {
    .visible = false,
    .named = true,
  },
  [sym__weak_digest] = {
    .visible = false,
    .named = true,
  },
  [sym__override_session_key] = {
    .visible = false,
    .named = true,
  },
  [sym__override_session_key_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__default_sig_expire] = {
    .visible = false,
    .named = true,
  },
  [sym__default_cert_expire] = {
    .visible = false,
    .named = true,
  },
  [sym__default_new_key_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__default_preference_list] = {
    .visible = false,
    .named = true,
  },
  [sym__default_preference_value] = {
    .visible = true,
    .named = true,
  },
  [sym__default_keyserver_url] = {
    .visible = false,
    .named = true,
  },
  [sym__chuid] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__verify_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__auto_key_locate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__import_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__export_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_cipher_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_digest_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_compress_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_new_key_algo_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_preference_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_parameter = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 1},
  [8] = {.index = 5, .length = 2},
  [12] = {.index = 7, .length = 1},
  [13] = {.index = 8, .length = 2},
  [14] = {.index = 10, .length = 2},
  [16] = {.index = 10, .length = 2},
  [17] = {.index = 12, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_parameter, 0, .inherited = true},
  [1] =
    {field_name, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_parameter, 2},
  [4] =
    {field_parameter, 0},
  [5] =
    {field_parameter, 2},
    {field_parameter, 3, .inherited = true},
  [7] =
    {field_parameter, 1},
  [8] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [10] =
    {field_name, 2},
    {field_value, 4},
  [12] =
    {field_name, 3},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = aux_sym_string_token1,
  },
  [5] = {
    [2] = sym__list_parameter,
  },
  [6] = {
    [2] = sym_url,
  },
  [9] = {
    [0] = sym__list_parameter,
  },
  [10] = {
    [3] = sym_url,
  },
  [11] = {
    [1] = aux_sym_string_token1,
  },
  [15] = {
    [1] = sym__list_parameter,
  },
  [16] = {
    [2] = sym_string,
  },
  [17] = {
    [3] = sym_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__notation, 3,
    aux_sym__notation,
    sym_string,
    sym_url,
  aux_sym__command_repeat1, 2,
    aux_sym__command_repeat1,
    aux_sym_string_token1,
  aux_sym__command_repeat2, 2,
    aux_sym__command_repeat2,
    aux_sym_string_token1,
  aux_sym__command_repeat3, 2,
    aux_sym__command_repeat3,
    aux_sym_string_token1,
  aux_sym_string_repeat1, 2,
    aux_sym_string_repeat1,
    aux_sym_string_token1,
  aux_sym_string_repeat2, 2,
    aux_sym_string_repeat2,
    aux_sym_string_token1,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 34,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 130,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
};

static inline bool aux_sym__command_format_token1_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < 'K'
      ? (c < 'I'
        ? c == '%'
        : c <= 'I')
      : (c <= 'K' || (c >= 'T' && c <= 'V')))
    : (c <= 'f' || (c < 't'
      ? (c < 'k'
        ? c == 'i'
        : c <= 'k')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2811);
      if (lookahead == '!') ADVANCE(3048);
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '%') ADVANCE(2942);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '2') ADVANCE(2940);
      if (lookahead == '=') ADVANCE(2999);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2945);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(2945);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(2940);
      if (lookahead != 0) ADVANCE(2940);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2812);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2812);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (lookahead != 0) ADVANCE(2940);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2812);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2941);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (lookahead != 0) ADVANCE(2940);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(2812);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '0') ADVANCE(3129);
      if (lookahead == 'R') ADVANCE(331);
      if (lookahead == 'S') ADVANCE(330);
      if (lookahead == 'a') ADVANCE(2313);
      if (lookahead == 'b') ADVANCE(402);
      if (lookahead == 'c') ADVANCE(474);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(2696);
      if (lookahead == 'f') ADVANCE(1383);
      if (lookahead == 'g') ADVANCE(1788);
      if (lookahead == 'h') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(1919);
      if (lookahead == 'k') ADVANCE(1071);
      if (lookahead == 'l') ADVANCE(686);
      if (lookahead == 'm') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(1842);
      if (lookahead == 'o') ADVANCE(2041);
      if (lookahead == 'p') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(1111);
      if (lookahead == 's') ADVANCE(1230);
      if (lookahead == 't') ADVANCE(2224);
      if (lookahead == 'u') ADVANCE(1704);
      if (lookahead == 'w') ADVANCE(1444);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3135);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(2812);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '0') ADVANCE(3140);
      if (lookahead == '3') ADVANCE(316);
      if (lookahead == 'A') ADVANCE(322);
      if (lookahead == 'B') ADVANCE(338);
      if (lookahead == 'C') ADVANCE(310);
      if (lookahead == 'I') ADVANCE(313);
      if (lookahead == 'T') ADVANCE(360);
      if (lookahead == 'n') ADVANCE(1944);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2779);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(2812);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == 'B') ADVANCE(361);
      if (lookahead == 'U') ADVANCE(1679);
      if (lookahead == 'Z') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(1510);
      if (lookahead == 'b') ADVANCE(2145);
      if (lookahead == 'c') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(2222);
      if (lookahead == 'f') ADVANCE(1359);
      if (lookahead == 'k') ADVANCE(2309);
      if (lookahead == 'l') ADVANCE(1850);
      if (lookahead == 'n') ADVANCE(1940);
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead == 'r') ADVANCE(916);
      if (lookahead == 's') ADVANCE(873);
      if (lookahead == 't') ADVANCE(1906);
      if (lookahead == 'u') ADVANCE(1790);
      if (lookahead == 'w') ADVANCE(1445);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(3021);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(2812);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3087);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(3048);
      if (lookahead == '%') ADVANCE(2941);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2940);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '%') ADVANCE(2942);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2940);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '%') ADVANCE(2947);
      if (lookahead == '\\') ADVANCE(2946);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2945);
      if (lookahead != 0) ADVANCE(2945);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '\\') ADVANCE(2946);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2945);
      if (lookahead != 0) ADVANCE(2945);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(2944);
      if (lookahead == '\'') ADVANCE(2950);
      if (lookahead == '0') ADVANCE(3137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3141);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(2944);
      if (lookahead == '\'') ADVANCE(2950);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3141);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(2953);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == '\\') ADVANCE(2952);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2951);
      if (lookahead != 0) ADVANCE(2951);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(2941);
      if (lookahead == '=') ADVANCE(2999);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2940);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == '\\') ADVANCE(2952);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2951);
      if (lookahead != 0) ADVANCE(2951);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(721);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(1090);
      if (lookahead == 'g') ADVANCE(912);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(528);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(1101);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(1443);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(459);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(535);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(713);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(2658);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(1828);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(1626);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(1484);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(1215);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(1096);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(2809);
      if (lookahead == '.') ADVANCE(2781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(681);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(396);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(937);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(1468);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(621);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == 's') ADVANCE(2516);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(1022);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(1403);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(469);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(2175);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(715);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(1482);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(1048);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(2640);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(1455);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(533);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(261);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(2308);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(2745);
      if (lookahead == 'b') ADVANCE(1317);
      if (lookahead == 'c') ADVANCE(851);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(290);
      if (lookahead == '8') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2965);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(575);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(2684);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(2655);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(652);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(2679);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(683);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(1107);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(1240);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(2646);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(1515);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(1248);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(1102);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(2512);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(2317);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(1081);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(1231);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(573);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(2627);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(1086);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(798);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(1087);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(1190);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(2365);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(1928);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(2014);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(1129);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(1864);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(2016);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(2631);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(2076);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(1968);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(1628);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(1104);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(2362);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(1573);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(2410);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(906);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(806);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(559);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(514);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(1820);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(1446);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(2039);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(1907);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(1602);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(2359);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(507);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(1228);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(2318);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(397);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(1113);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(1768);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(1914);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(2614);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(1824);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(1480);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(2360);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(2598);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(2361);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(1593);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(2389);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(2477);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(2059);
      END_STATE();
    case 133:
      if (lookahead == '-') ADVANCE(1103);
      END_STATE();
    case 134:
      if (lookahead == '-') ADVANCE(1795);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(1922);
      END_STATE();
    case 136:
      if (lookahead == '-') ADVANCE(2164);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(2471);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(702);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(1448);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(2170);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(1867);
      if (lookahead == 'i') ADVANCE(660);
      if (lookahead == 'r') ADVANCE(1249);
      if (lookahead == 's') ADVANCE(826);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(2599);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(2323);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(1931);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(1538);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(1449);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(2789);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(1277);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(2600);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(2346);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(1288);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(2254);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(2480);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(1450);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(1534);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(2601);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(2347);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(2498);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(2484);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(1452);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(828);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(2602);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(1453);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(2603);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(2332);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(1454);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(2604);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(2333);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(2363);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(2154);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(2367);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(885);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(1106);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(2521);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(1577);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(2063);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(515);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(1470);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(463);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(1122);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(2615);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(1792);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(2172);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(2391);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(576);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(475);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(2618);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(1800);
      END_STATE();
    case 192:
      if (lookahead == '-') ADVANCE(2547);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(2620);
      END_STATE();
    case 194:
      if (lookahead == '-') ADVANCE(2552);
      END_STATE();
    case 195:
      if (lookahead == '-') ADVANCE(2663);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(2622);
      END_STATE();
    case 197:
      if (lookahead == '-') ADVANCE(2665);
      END_STATE();
    case 198:
      if (lookahead == '-') ADVANCE(1045);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(1412);
      END_STATE();
    case 200:
      if (lookahead == '-') ADVANCE(1472);
      END_STATE();
    case 201:
      if (lookahead == '-') ADVANCE(1115);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(2046);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(1592);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(992);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(1016);
      END_STATE();
    case 206:
      if (lookahead == '-') ADVANCE(1664);
      if (lookahead == 'd') ADVANCE(512);
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(1812);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(1799);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(1594);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(2797);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(2797);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2780);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(1963);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(1020);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(1047);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(1816);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(1033);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(1668);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(481);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(1478);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(1669);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(482);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(1670);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(483);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(484);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(485);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(2691);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(2667);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(1034);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(2061);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(2258);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(1123);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(1481);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(1041);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(2062);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(618);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(1125);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(2405);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(1126);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(2671);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(1127);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(2769);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(2416);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(1607);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(714);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(1078);
      END_STATE();
    case 248:
      if (lookahead == '/') ADVANCE(2809);
      END_STATE();
    case 249:
      if (lookahead == '/') ADVANCE(248);
      END_STATE();
    case 250:
      if (lookahead == '0') ADVANCE(3146);
      END_STATE();
    case 251:
      if (lookahead == '0') ADVANCE(276);
      END_STATE();
    case 252:
      if (lookahead == '0') ADVANCE(2880);
      END_STATE();
    case 253:
      if (lookahead == '0') ADVANCE(2878);
      END_STATE();
    case 254:
      if (lookahead == '0') ADVANCE(3024);
      END_STATE();
    case 255:
      if (lookahead == '0') ADVANCE(3025);
      END_STATE();
    case 256:
      if (lookahead == '0') ADVANCE(3036);
      if (lookahead == 'c') ADVANCE(3032);
      if (lookahead == 'e') ADVANCE(3037);
      if (lookahead == 'f') ADVANCE(3035);
      if (lookahead == 'h') ADVANCE(419);
      if (lookahead == 'i') ADVANCE(1919);
      if (lookahead == 'l') ADVANCE(1848);
      if (lookahead == 'm') ADVANCE(833);
      if (lookahead == 'n') ADVANCE(1948);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 's') ADVANCE(1232);
      if (lookahead == 't') ADVANCE(2224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'd')) ADVANCE(3044);
      END_STATE();
    case 257:
      if (lookahead == '0') ADVANCE(251);
      END_STATE();
    case 258:
      if (lookahead == '1') ADVANCE(3146);
      if (lookahead == '2') ADVANCE(272);
      if (lookahead == '3') ADVANCE(291);
      if (lookahead == '5') ADVANCE(264);
      END_STATE();
    case 259:
      if (lookahead == '1') ADVANCE(257);
      END_STATE();
    case 260:
      if (lookahead == '1') ADVANCE(273);
      if (lookahead == '2') ADVANCE(283);
      END_STATE();
    case 261:
      if (lookahead == '1') ADVANCE(2961);
      if (lookahead == '2') ADVANCE(2960);
      END_STATE();
    case 262:
      if (lookahead == '1') ADVANCE(2965);
      END_STATE();
    case 263:
      if (lookahead == '1') ADVANCE(287);
      END_STATE();
    case 264:
      if (lookahead == '1') ADVANCE(268);
      END_STATE();
    case 265:
      if (lookahead == '2') ADVANCE(1441);
      if (lookahead == 'e') ADVANCE(1506);
      if (lookahead == 'h') ADVANCE(1847);
      if (lookahead == 'i') ADVANCE(1150);
      if (lookahead == 'k') ADVANCE(1307);
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 266:
      if (lookahead == '2') ADVANCE(3147);
      END_STATE();
    case 267:
      if (lookahead == '2') ADVANCE(3144);
      END_STATE();
    case 268:
      if (lookahead == '2') ADVANCE(3146);
      END_STATE();
    case 269:
      if (lookahead == '2') ADVANCE(278);
      if (lookahead == '4') ADVANCE(295);
      END_STATE();
    case 270:
      if (lookahead == '2') ADVANCE(2820);
      END_STATE();
    case 271:
      if (lookahead == '2') ADVANCE(2821);
      END_STATE();
    case 272:
      if (lookahead == '2') ADVANCE(277);
      if (lookahead == '5') ADVANCE(286);
      END_STATE();
    case 273:
      if (lookahead == '2') ADVANCE(289);
      if (lookahead == '9') ADVANCE(267);
      END_STATE();
    case 274:
      if (lookahead == '2') ADVANCE(35);
      END_STATE();
    case 275:
      if (lookahead == '2') ADVANCE(281);
      if (lookahead == '4') ADVANCE(297);
      END_STATE();
    case 276:
      if (lookahead == '3') ADVANCE(3014);
      END_STATE();
    case 277:
      if (lookahead == '4') ADVANCE(3146);
      END_STATE();
    case 278:
      if (lookahead == '4') ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == '4') ADVANCE(252);
      END_STATE();
    case 280:
      if (lookahead == '4') ADVANCE(254);
      END_STATE();
    case 281:
      if (lookahead == '4') ADVANCE(280);
      END_STATE();
    case 282:
      if (lookahead == '5') ADVANCE(3144);
      END_STATE();
    case 283:
      if (lookahead == '5') ADVANCE(285);
      END_STATE();
    case 284:
      if (lookahead == '5') ADVANCE(301);
      END_STATE();
    case 285:
      if (lookahead == '6') ADVANCE(3144);
      END_STATE();
    case 286:
      if (lookahead == '6') ADVANCE(3146);
      END_STATE();
    case 287:
      if (lookahead == '6') ADVANCE(250);
      END_STATE();
    case 288:
      if (lookahead == '7') ADVANCE(2881);
      if (lookahead == '8') ADVANCE(2882);
      END_STATE();
    case 289:
      if (lookahead == '8') ADVANCE(3144);
      END_STATE();
    case 290:
      if (lookahead == '8') ADVANCE(2960);
      END_STATE();
    case 291:
      if (lookahead == '8') ADVANCE(277);
      END_STATE();
    case 292:
      if (lookahead == '8') ADVANCE(284);
      END_STATE();
    case 293:
      if (lookahead == '8') ADVANCE(253);
      END_STATE();
    case 294:
      if (lookahead == '8') ADVANCE(292);
      END_STATE();
    case 295:
      if (lookahead == '8') ADVANCE(293);
      END_STATE();
    case 296:
      if (lookahead == '8') ADVANCE(255);
      END_STATE();
    case 297:
      if (lookahead == '8') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == '8') ADVANCE(95);
      END_STATE();
    case 299:
      if (lookahead == '8') ADVANCE(239);
      END_STATE();
    case 300:
      if (lookahead == '9') ADVANCE(267);
      END_STATE();
    case 301:
      if (lookahead == '9') ADVANCE(58);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(249);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 304:
      if (lookahead == ':') ADVANCE(2972);
      END_STATE();
    case 305:
      if (lookahead == 'A') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 306:
      if (lookahead == 'A') ADVANCE(3143);
      END_STATE();
    case 307:
      if (lookahead == 'A') ADVANCE(258);
      END_STATE();
    case 308:
      if (lookahead == 'A') ADVANCE(3144);
      END_STATE();
    case 309:
      if (lookahead == 'A') ADVANCE(260);
      END_STATE();
    case 310:
      if (lookahead == 'A') ADVANCE(343);
      END_STATE();
    case 311:
      if (lookahead == 'B') ADVANCE(3147);
      END_STATE();
    case 312:
      if (lookahead == 'C') ADVANCE(314);
      if (lookahead == 'D') ADVANCE(318);
      if (lookahead == 'L') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 313:
      if (lookahead == 'D') ADVANCE(324);
      END_STATE();
    case 314:
      if (lookahead == 'D') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 315:
      if (lookahead == 'D') ADVANCE(263);
      END_STATE();
    case 316:
      if (lookahead == 'D') ADVANCE(325);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2778);
      END_STATE();
    case 317:
      if (lookahead == 'D') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 318:
      if (lookahead == 'D') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 319:
      if (lookahead == 'E') ADVANCE(340);
      END_STATE();
    case 320:
      if (lookahead == 'E') ADVANCE(342);
      END_STATE();
    case 321:
      if (lookahead == 'E') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 322:
      if (lookahead == 'E') ADVANCE(352);
      END_STATE();
    case 323:
      if (lookahead == 'E') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 324:
      if (lookahead == 'E') ADVANCE(308);
      END_STATE();
    case 325:
      if (lookahead == 'E') ADVANCE(354);
      END_STATE();
    case 326:
      if (lookahead == 'F') ADVANCE(334);
      END_STATE();
    case 327:
      if (lookahead == 'G') ADVANCE(3143);
      END_STATE();
    case 328:
      if (lookahead == 'H') ADVANCE(3143);
      if (lookahead == 'S') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 329:
      if (lookahead == 'H') ADVANCE(3144);
      END_STATE();
    case 330:
      if (lookahead == 'H') ADVANCE(307);
      END_STATE();
    case 331:
      if (lookahead == 'I') ADVANCE(349);
      END_STATE();
    case 332:
      if (lookahead == 'I') ADVANCE(349);
      if (lookahead == 'S') ADVANCE(306);
      END_STATE();
    case 333:
      if (lookahead == 'I') ADVANCE(311);
      END_STATE();
    case 334:
      if (lookahead == 'I') ADVANCE(356);
      END_STATE();
    case 335:
      if (lookahead == 'I') ADVANCE(347);
      if (lookahead == 'L') ADVANCE(333);
      END_STATE();
    case 336:
      if (lookahead == 'I') ADVANCE(348);
      END_STATE();
    case 337:
      if (lookahead == 'I') ADVANCE(309);
      END_STATE();
    case 338:
      if (lookahead == 'L') ADVANCE(346);
      END_STATE();
    case 339:
      if (lookahead == 'L') ADVANCE(346);
      if (lookahead == 'Z') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 340:
      if (lookahead == 'L') ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'L') ADVANCE(337);
      END_STATE();
    case 342:
      if (lookahead == 'M') ADVANCE(315);
      END_STATE();
    case 343:
      if (lookahead == 'M') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(357);
      END_STATE();
    case 344:
      if (lookahead == 'M') ADVANCE(319);
      if (lookahead == 'S') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 345:
      if (lookahead == 'O') ADVANCE(326);
      END_STATE();
    case 346:
      if (lookahead == 'O') ADVANCE(359);
      END_STATE();
    case 347:
      if (lookahead == 'P') ADVANCE(3147);
      END_STATE();
    case 348:
      if (lookahead == 'P') ADVANCE(266);
      END_STATE();
    case 349:
      if (lookahead == 'P') ADVANCE(320);
      END_STATE();
    case 350:
      if (lookahead == 'S') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 351:
      if (lookahead == 'S') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 352:
      if (lookahead == 'S') ADVANCE(3145);
      END_STATE();
    case 353:
      if (lookahead == 'S') ADVANCE(3145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 354:
      if (lookahead == 'S') ADVANCE(3144);
      END_STATE();
    case 355:
      if (lookahead == 'S') ADVANCE(3144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 356:
      if (lookahead == 'S') ADVANCE(329);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(282);
      END_STATE();
    case 358:
      if (lookahead == 'T') ADVANCE(2800);
      END_STATE();
    case 359:
      if (lookahead == 'W') ADVANCE(326);
      END_STATE();
    case 360:
      if (lookahead == 'W') ADVANCE(345);
      END_STATE();
    case 361:
      if (lookahead == 'Z') ADVANCE(336);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'u') ADVANCE(1554);
      if (lookahead == 'z') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(1440);
      if (lookahead == 'o') ADVANCE(2072);
      if (lookahead == 'u') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(1698);
      if (lookahead == 'e') ADVANCE(2099);
      if (lookahead == 'i') ADVANCE(1699);
      if (lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(2311);
      if (lookahead == 'e') ADVANCE(2096);
      if (lookahead == 'g') ADVANCE(1984);
      if (lookahead == 'h') ADVANCE(1957);
      if (lookahead == 'i') ADVANCE(1770);
      if (lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 366:
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'c') ADVANCE(2095);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(2727);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(1512);
      if (lookahead == 'c') ADVANCE(1853);
      if (lookahead == 'd') ADVANCE(788);
      if (lookahead == 'e') ADVANCE(1674);
      if (lookahead == 'f') ADVANCE(1923);
      if (lookahead == 'g') ADVANCE(2094);
      if (lookahead == 'i') ADVANCE(1700);
      if (lookahead == 'k') ADVANCE(789);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(830);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == 's') ADVANCE(797);
      if (lookahead == 't') ADVANCE(1061);
      if (lookahead == 'u') ADVANCE(2420);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(2919);
      END_STATE();
    case 370:
      if (lookahead == 'a') ADVANCE(2818);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(2819);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(1983);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(2581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(2455);
      END_STATE();
    case 376:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(1325);
      END_STATE();
    case 378:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 379:
      if (lookahead == 'a') ADVANCE(1776);
      if (lookahead == 'e') ADVANCE(1706);
      END_STATE();
    case 380:
      if (lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(2025);
      END_STATE();
    case 382:
      if (lookahead == 'a') ADVANCE(634);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(2075);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(1825);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(1701);
      if (lookahead == 'e') ADVANCE(2071);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(2357);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(2628);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(1601);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(1753);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(1613);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(2454);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == 'e') ADVANCE(2263);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(1615);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(2517);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'c') ADVANCE(1560);
      if (lookahead == 'd') ADVANCE(389);
      if (lookahead == 'l') ADVANCE(1920);
      if (lookahead == 'm') ADVANCE(1265);
      if (lookahead == 'o') ADVANCE(2042);
      if (lookahead == 'r') ADVANCE(783);
      if (lookahead == 's') ADVANCE(824);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(1521);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(1680);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(1587);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(1681);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(2169);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(679);
      if (lookahead == 'b') ADVANCE(458);
      if (lookahead == 'e') ADVANCE(2699);
      if (lookahead == 'g') ADVANCE(2605);
      if (lookahead == 'n') ADVANCE(1950);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(2968);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(1485);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(2314);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(586);
      if (lookahead == 'g') ADVANCE(1991);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(1486);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(2433);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(1992);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(2475);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(2182);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(2441);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(1501);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(1504);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(2121);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(2447);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(2358);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(2358);
      if (lookahead == 'k') ADVANCE(1983);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(2119);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(2091);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(1520);
      if (lookahead == 'i') ADVANCE(1195);
      if (lookahead == 'l') ADVANCE(921);
      if (lookahead == 's') ADVANCE(983);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(1532);
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(2507);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(2340);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(1181);
      if (lookahead == 'e') ADVANCE(2267);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(1562);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(2500);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(1456);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(831);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 's') ADVANCE(1263);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(2179);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(2735);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(1903);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(1633);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(2509);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(2011);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(2503);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(1765);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(1546);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(1634);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(2514);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(1755);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(1567);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(2519);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(1756);
      if (lookahead == 'e') ADVANCE(1121);
      if (lookahead == 'i') ADVANCE(2157);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(1451);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(1609);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(1637);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(2523);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(1772);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(2736);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(1778);
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 455:
      if (lookahead == 'a') ADVANCE(1641);
      END_STATE();
    case 456:
      if (lookahead == 'a') ADVANCE(1779);
      END_STATE();
    case 457:
      if (lookahead == 'a') ADVANCE(1643);
      END_STATE();
    case 458:
      if (lookahead == 'a') ADVANCE(2339);
      END_STATE();
    case 459:
      if (lookahead == 'a') ADVANCE(1558);
      if (lookahead == 's') ADVANCE(910);
      END_STATE();
    case 460:
      if (lookahead == 'a') ADVANCE(2611);
      END_STATE();
    case 461:
      if (lookahead == 'a') ADVANCE(1652);
      END_STATE();
    case 462:
      if (lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 463:
      if (lookahead == 'a') ADVANCE(1556);
      END_STATE();
    case 464:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(1791);
      END_STATE();
    case 466:
      if (lookahead == 'a') ADVANCE(2524);
      END_STATE();
    case 467:
      if (lookahead == 'a') ADVANCE(2613);
      END_STATE();
    case 468:
      if (lookahead == 'a') ADVANCE(1654);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(1559);
      if (lookahead == 'l') ADVANCE(949);
      END_STATE();
    case 470:
      if (lookahead == 'a') ADVANCE(2184);
      END_STATE();
    case 471:
      if (lookahead == 'a') ADVANCE(2380);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(2525);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(1655);
      END_STATE();
    case 474:
      if (lookahead == 'a') ADVANCE(577);
      if (lookahead == 'e') ADVANCE(2140);
      if (lookahead == 'l') ADVANCE(950);
      if (lookahead == 'r') ADVANCE(2731);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(1564);
      END_STATE();
    case 476:
      if (lookahead == 'a') ADVANCE(2551);
      END_STATE();
    case 477:
      if (lookahead == 'a') ADVANCE(2528);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(1566);
      END_STATE();
    case 479:
      if (lookahead == 'a') ADVANCE(1568);
      END_STATE();
    case 480:
      if (lookahead == 'a') ADVANCE(2555);
      END_STATE();
    case 481:
      if (lookahead == 'a') ADVANCE(1571);
      END_STATE();
    case 482:
      if (lookahead == 'a') ADVANCE(1574);
      END_STATE();
    case 483:
      if (lookahead == 'a') ADVANCE(1576);
      END_STATE();
    case 484:
      if (lookahead == 'a') ADVANCE(1578);
      END_STATE();
    case 485:
      if (lookahead == 'a') ADVANCE(1579);
      END_STATE();
    case 486:
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'p') ADVANCE(1513);
      END_STATE();
    case 487:
      if (lookahead == 'a') ADVANCE(2199);
      END_STATE();
    case 488:
      if (lookahead == 'a') ADVANCE(2532);
      END_STATE();
    case 489:
      if (lookahead == 'a') ADVANCE(2632);
      END_STATE();
    case 490:
      if (lookahead == 'a') ADVANCE(2238);
      END_STATE();
    case 491:
      if (lookahead == 'a') ADVANCE(2544);
      END_STATE();
    case 492:
      if (lookahead == 'a') ADVANCE(1589);
      END_STATE();
    case 493:
      if (lookahead == 'a') ADVANCE(1590);
      END_STATE();
    case 494:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 495:
      if (lookahead == 'a') ADVANCE(2245);
      END_STATE();
    case 496:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 497:
      if (lookahead == 'a') ADVANCE(2209);
      END_STATE();
    case 498:
      if (lookahead == 'a') ADVANCE(2067);
      END_STATE();
    case 499:
      if (lookahead == 'b') ADVANCE(2582);
      if (lookahead == 'f') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(2806);
      END_STATE();
    case 500:
      if (lookahead == 'b') ADVANCE(2871);
      END_STATE();
    case 501:
      if (lookahead == 'b') ADVANCE(2835);
      END_STATE();
    case 502:
      if (lookahead == 'b') ADVANCE(2836);
      END_STATE();
    case 503:
      if (lookahead == 'b') ADVANCE(1561);
      END_STATE();
    case 504:
      if (lookahead == 'b') ADVANCE(1860);
      if (lookahead == 'i') ADVANCE(1100);
      END_STATE();
    case 505:
      if (lookahead == 'b') ADVANCE(1082);
      END_STATE();
    case 506:
      if (lookahead == 'b') ADVANCE(2626);
      END_STATE();
    case 507:
      if (lookahead == 'b') ADVANCE(2594);
      END_STATE();
    case 508:
      if (lookahead == 'b') ADVANCE(2590);
      END_STATE();
    case 509:
      if (lookahead == 'b') ADVANCE(902);
      END_STATE();
    case 510:
      if (lookahead == 'b') ADVANCE(2007);
      END_STATE();
    case 511:
      if (lookahead == 'b') ADVANCE(411);
      END_STATE();
    case 512:
      if (lookahead == 'b') ADVANCE(185);
      END_STATE();
    case 513:
      if (lookahead == 'b') ADVANCE(1849);
      END_STATE();
    case 514:
      if (lookahead == 'b') ADVANCE(1535);
      END_STATE();
    case 515:
      if (lookahead == 'b') ADVANCE(1537);
      END_STATE();
    case 516:
      if (lookahead == 'b') ADVANCE(2629);
      END_STATE();
    case 517:
      if (lookahead == 'b') ADVANCE(1572);
      END_STATE();
    case 518:
      if (lookahead == 'b') ADVANCE(1582);
      END_STATE();
    case 519:
      if (lookahead == 'b') ADVANCE(1584);
      END_STATE();
    case 520:
      if (lookahead == 'b') ADVANCE(1473);
      END_STATE();
    case 521:
      if (lookahead == 'b') ADVANCE(1474);
      END_STATE();
    case 522:
      if (lookahead == 'b') ADVANCE(1475);
      END_STATE();
    case 523:
      if (lookahead == 'b') ADVANCE(1476);
      END_STATE();
    case 524:
      if (lookahead == 'b') ADVANCE(1076);
      END_STATE();
    case 525:
      if (lookahead == 'c') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 526:
      if (lookahead == 'c') ADVANCE(425);
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 527:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 528:
      if (lookahead == 'c') ADVANCE(1427);
      if (lookahead == 'd') ADVANCE(1256);
      if (lookahead == 'm') ADVANCE(1938);
      END_STATE();
    case 529:
      if (lookahead == 'c') ADVANCE(1910);
      if (lookahead == 's') ADVANCE(989);
      END_STATE();
    case 530:
      if (lookahead == 'c') ADVANCE(3045);
      END_STATE();
    case 531:
      if (lookahead == 'c') ADVANCE(2975);
      END_STATE();
    case 532:
      if (lookahead == 'c') ADVANCE(3029);
      END_STATE();
    case 533:
      if (lookahead == 'c') ADVANCE(1400);
      if (lookahead == 'd') ADVANCE(1405);
      END_STATE();
    case 534:
      if (lookahead == 'c') ADVANCE(1508);
      if (lookahead == 'p') ADVANCE(2617);
      if (lookahead == 't') ADVANCE(809);
      END_STATE();
    case 535:
      if (lookahead == 'c') ADVANCE(1217);
      if (lookahead == 'k') ADVANCE(941);
      END_STATE();
    case 536:
      if (lookahead == 'c') ADVANCE(2770);
      END_STATE();
    case 537:
      if (lookahead == 'c') ADVANCE(1458);
      END_STATE();
    case 538:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 539:
      if (lookahead == 'c') ADVANCE(1852);
      END_STATE();
    case 540:
      if (lookahead == 'c') ADVANCE(1434);
      END_STATE();
    case 541:
      if (lookahead == 'c') ADVANCE(1435);
      END_STATE();
    case 542:
      if (lookahead == 'c') ADVANCE(1219);
      END_STATE();
    case 543:
      if (lookahead == 'c') ADVANCE(1436);
      END_STATE();
    case 544:
      if (lookahead == 'c') ADVANCE(1438);
      END_STATE();
    case 545:
      if (lookahead == 'c') ADVANCE(1439);
      END_STATE();
    case 546:
      if (lookahead == 'c') ADVANCE(1216);
      END_STATE();
    case 547:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 548:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 549:
      if (lookahead == 'c') ADVANCE(1866);
      if (lookahead == 'f') ADVANCE(1309);
      if (lookahead == 'i') ADVANCE(548);
      if (lookahead == 'k') ADVANCE(795);
      if (lookahead == 's') ADVANCE(923);
      if (lookahead == 'w') ADVANCE(1466);
      END_STATE();
    case 550:
      if (lookahead == 'c') ADVANCE(2719);
      END_STATE();
    case 551:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 552:
      if (lookahead == 'c') ADVANCE(2270);
      END_STATE();
    case 553:
      if (lookahead == 'c') ADVANCE(1391);
      END_STATE();
    case 554:
      if (lookahead == 'c') ADVANCE(2203);
      END_STATE();
    case 555:
      if (lookahead == 'c') ADVANCE(732);
      END_STATE();
    case 556:
      if (lookahead == 'c') ADVANCE(2159);
      if (lookahead == 'm') ADVANCE(705);
      if (lookahead == 't') ADVANCE(1261);
      if (lookahead == 'v') ADVANCE(399);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(2161);
      END_STATE();
    case 558:
      if (lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 559:
      if (lookahead == 'c') ADVANCE(1883);
      END_STATE();
    case 560:
      if (lookahead == 'c') ADVANCE(2443);
      END_STATE();
    case 561:
      if (lookahead == 'c') ADVANCE(2450);
      END_STATE();
    case 562:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 563:
      if (lookahead == 'c') ADVANCE(762);
      END_STATE();
    case 564:
      if (lookahead == 'c') ADVANCE(877);
      END_STATE();
    case 565:
      if (lookahead == 'c') ADVANCE(846);
      END_STATE();
    case 566:
      if (lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 567:
      if (lookahead == 'c') ADVANCE(1222);
      END_STATE();
    case 568:
      if (lookahead == 'c') ADVANCE(1973);
      if (lookahead == 's') ADVANCE(1075);
      END_STATE();
    case 569:
      if (lookahead == 'c') ADVANCE(1632);
      END_STATE();
    case 570:
      if (lookahead == 'c') ADVANCE(1254);
      if (lookahead == 'p') ADVANCE(377);
      if (lookahead == 'q') ADVANCE(2578);
      if (lookahead == 's') ADVANCE(2522);
      END_STATE();
    case 571:
      if (lookahead == 'c') ADVANCE(438);
      END_STATE();
    case 572:
      if (lookahead == 'c') ADVANCE(1224);
      END_STATE();
    case 573:
      if (lookahead == 'c') ADVANCE(413);
      END_STATE();
    case 574:
      if (lookahead == 'c') ADVANCE(1429);
      if (lookahead == 'd') ADVANCE(1294);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead == 'p') ADVANCE(2635);
      if (lookahead == 's') ADVANCE(1407);
      END_STATE();
    case 575:
      if (lookahead == 'c') ADVANCE(2269);
      if (lookahead == 's') ADVANCE(1000);
      END_STATE();
    case 576:
      if (lookahead == 'c') ADVANCE(1225);
      END_STATE();
    case 577:
      if (lookahead == 'c') ADVANCE(1226);
      END_STATE();
    case 578:
      if (lookahead == 'c') ADVANCE(1635);
      END_STATE();
    case 579:
      if (lookahead == 'c') ADVANCE(1477);
      END_STATE();
    case 580:
      if (lookahead == 'c') ADVANCE(430);
      END_STATE();
    case 581:
      if (lookahead == 'c') ADVANCE(1639);
      END_STATE();
    case 582:
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(1463);
      END_STATE();
    case 583:
      if (lookahead == 'c') ADVANCE(439);
      END_STATE();
    case 584:
      if (lookahead == 'c') ADVANCE(2739);
      END_STATE();
    case 585:
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(2000);
      END_STATE();
    case 586:
      if (lookahead == 'c') ADVANCE(1462);
      END_STATE();
    case 587:
      if (lookahead == 'c') ADVANCE(1464);
      END_STATE();
    case 588:
      if (lookahead == 'c') ADVANCE(913);
      END_STATE();
    case 589:
      if (lookahead == 'c') ADVANCE(879);
      END_STATE();
    case 590:
      if (lookahead == 'c') ADVANCE(900);
      END_STATE();
    case 591:
      if (lookahead == 'c') ADVANCE(881);
      END_STATE();
    case 592:
      if (lookahead == 'c') ADVANCE(882);
      END_STATE();
    case 593:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 594:
      if (lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 595:
      if (lookahead == 'c') ADVANCE(1565);
      if (lookahead == 'e') ADVANCE(2697);
      if (lookahead == 'l') ADVANCE(1975);
      if (lookahead == 'm') ADVANCE(1406);
      if (lookahead == 'o') ADVANCE(2047);
      if (lookahead == 'r') ADVANCE(814);
      if (lookahead == 's') ADVANCE(1218);
      END_STATE();
    case 596:
      if (lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 597:
      if (lookahead == 'c') ADVANCE(2167);
      END_STATE();
    case 598:
      if (lookahead == 'c') ADVANCE(1005);
      if (lookahead == 's') ADVANCE(1316);
      END_STATE();
    case 599:
      if (lookahead == 'c') ADVANCE(1376);
      END_STATE();
    case 600:
      if (lookahead == 'c') ADVANCE(2750);
      END_STATE();
    case 601:
      if (lookahead == 'c') ADVANCE(1388);
      END_STATE();
    case 602:
      if (lookahead == 'c') ADVANCE(2753);
      END_STATE();
    case 603:
      if (lookahead == 'c') ADVANCE(1394);
      END_STATE();
    case 604:
      if (lookahead == 'c') ADVANCE(2756);
      END_STATE();
    case 605:
      if (lookahead == 'c') ADVANCE(1396);
      END_STATE();
    case 606:
      if (lookahead == 'c') ADVANCE(2757);
      END_STATE();
    case 607:
      if (lookahead == 'c') ADVANCE(1397);
      END_STATE();
    case 608:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 609:
      if (lookahead == 'c') ADVANCE(477);
      END_STATE();
    case 610:
      if (lookahead == 'c') ADVANCE(2534);
      END_STATE();
    case 611:
      if (lookahead == 'c') ADVANCE(493);
      END_STATE();
    case 612:
      if (lookahead == 'c') ADVANCE(1010);
      if (lookahead == 'o') ADVANCE(2634);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(1013);
      if (lookahead == 'r') ADVANCE(2316);
      END_STATE();
    case 614:
      if (lookahead == 'c') ADVANCE(2261);
      END_STATE();
    case 615:
      if (lookahead == 'c') ADVANCE(1972);
      if (lookahead == 'd') ADVANCE(1060);
      END_STATE();
    case 616:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 617:
      if (lookahead == 'c') ADVANCE(1479);
      END_STATE();
    case 618:
      if (lookahead == 'c') ADVANCE(1029);
      if (lookahead == 's') ADVANCE(1419);
      END_STATE();
    case 619:
      if (lookahead == 'c') ADVANCE(2266);
      END_STATE();
    case 620:
      if (lookahead == 'c') ADVANCE(1976);
      END_STATE();
    case 621:
      if (lookahead == 'c') ADVANCE(1037);
      if (lookahead == 'k') ADVANCE(803);
      if (lookahead == 'n') ADVANCE(947);
      if (lookahead == 'p') ADVANCE(2141);
      if (lookahead == 'r') ADVANCE(1018);
      if (lookahead == 's') ADVANCE(1422);
      END_STATE();
    case 622:
      if (lookahead == 'c') ADVANCE(1239);
      if (lookahead == 'k') ADVANCE(1025);
      if (lookahead == 't') ADVANCE(2108);
      END_STATE();
    case 623:
      if (lookahead == 'c') ADVANCE(498);
      END_STATE();
    case 624:
      if (lookahead == 'c') ADVANCE(1606);
      END_STATE();
    case 625:
      if (lookahead == 'c') ADVANCE(1430);
      END_STATE();
    case 626:
      if (lookahead == 'd') ADVANCE(629);
      if (lookahead == 'g') ADVANCE(784);
      if (lookahead == 'l') ADVANCE(1555);
      if (lookahead == 'r') ADVANCE(1625);
      if (lookahead == 's') ADVANCE(1433);
      if (lookahead == 'u') ADVANCE(2457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 627:
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(1148);
      if (lookahead == 'i') ADVANCE(1656);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 628:
      if (lookahead == 'd') ADVANCE(3147);
      END_STATE();
    case 629:
      if (lookahead == 'd') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 630:
      if (lookahead == 'd') ADVANCE(3090);
      END_STATE();
    case 631:
      if (lookahead == 'd') ADVANCE(3051);
      if (lookahead == 'i') ADVANCE(1540);
      END_STATE();
    case 632:
      if (lookahead == 'd') ADVANCE(3049);
      if (lookahead == 'i') ADVANCE(1543);
      END_STATE();
    case 633:
      if (lookahead == 'd') ADVANCE(3079);
      if (lookahead == 'i') ADVANCE(1544);
      END_STATE();
    case 634:
      if (lookahead == 'd') ADVANCE(2872);
      END_STATE();
    case 635:
      if (lookahead == 'd') ADVANCE(3072);
      if (lookahead == 'i') ADVANCE(1550);
      END_STATE();
    case 636:
      if (lookahead == 'd') ADVANCE(2984);
      END_STATE();
    case 637:
      if (lookahead == 'd') ADVANCE(2985);
      END_STATE();
    case 638:
      if (lookahead == 'd') ADVANCE(2901);
      END_STATE();
    case 639:
      if (lookahead == 'd') ADVANCE(2907);
      END_STATE();
    case 640:
      if (lookahead == 'd') ADVANCE(2873);
      END_STATE();
    case 641:
      if (lookahead == 'd') ADVANCE(3083);
      END_STATE();
    case 642:
      if (lookahead == 'd') ADVANCE(2905);
      END_STATE();
    case 643:
      if (lookahead == 'd') ADVANCE(2906);
      END_STATE();
    case 644:
      if (lookahead == 'd') ADVANCE(2987);
      END_STATE();
    case 645:
      if (lookahead == 'd') ADVANCE(2979);
      END_STATE();
    case 646:
      if (lookahead == 'd') ADVANCE(3009);
      END_STATE();
    case 647:
      if (lookahead == 'd') ADVANCE(3029);
      END_STATE();
    case 648:
      if (lookahead == 'd') ADVANCE(687);
      END_STATE();
    case 649:
      if (lookahead == 'd') ADVANCE(777);
      END_STATE();
    case 650:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 651:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 652:
      if (lookahead == 'd') ADVANCE(386);
      END_STATE();
    case 653:
      if (lookahead == 'd') ADVANCE(1862);
      END_STATE();
    case 654:
      if (lookahead == 'd') ADVANCE(2274);
      END_STATE();
    case 655:
      if (lookahead == 'd') ADVANCE(1939);
      END_STATE();
    case 656:
      if (lookahead == 'd') ADVANCE(2279);
      END_STATE();
    case 657:
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 658:
      if (lookahead == 'd') ADVANCE(731);
      END_STATE();
    case 659:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 660:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 661:
      if (lookahead == 'd') ADVANCE(2285);
      END_STATE();
    case 662:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 663:
      if (lookahead == 'd') ADVANCE(837);
      END_STATE();
    case 664:
      if (lookahead == 'd') ADVANCE(2305);
      END_STATE();
    case 665:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 666:
      if (lookahead == 'd') ADVANCE(2307);
      END_STATE();
    case 667:
      if (lookahead == 'd') ADVANCE(840);
      END_STATE();
    case 668:
      if (lookahead == 'd') ADVANCE(739);
      END_STATE();
    case 669:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 670:
      if (lookahead == 'd') ADVANCE(746);
      END_STATE();
    case 671:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 672:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 673:
      if (lookahead == 'd') ADVANCE(748);
      END_STATE();
    case 674:
      if (lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 675:
      if (lookahead == 'd') ADVANCE(813);
      END_STATE();
    case 676:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 677:
      if (lookahead == 'd') ADVANCE(755);
      END_STATE();
    case 678:
      if (lookahead == 'd') ADVANCE(802);
      END_STATE();
    case 679:
      if (lookahead == 'd') ADVANCE(2666);
      END_STATE();
    case 680:
      if (lookahead == 'd') ADVANCE(974);
      END_STATE();
    case 681:
      if (lookahead == 'd') ADVANCE(2321);
      if (lookahead == 'l') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(2202);
      if (lookahead == 's') ADVANCE(2008);
      END_STATE();
    case 682:
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 683:
      if (lookahead == 'd') ADVANCE(1311);
      END_STATE();
    case 684:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 685:
      if (lookahead == 'd') ADVANCE(1291);
      END_STATE();
    case 686:
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 687:
      if (lookahead == 'd') ADVANCE(920);
      END_STATE();
    case 688:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 689:
      if (lookahead == 'd') ADVANCE(1295);
      END_STATE();
    case 690:
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(2248);
      END_STATE();
    case 691:
      if (lookahead == 'd') ADVANCE(914);
      END_STATE();
    case 692:
      if (lookahead == 'd') ADVANCE(842);
      if (lookahead == 's') ADVANCE(1258);
      END_STATE();
    case 693:
      if (lookahead == 'd') ADVANCE(952);
      END_STATE();
    case 694:
      if (lookahead == 'd') ADVANCE(680);
      END_STATE();
    case 695:
      if (lookahead == 'd') ADVANCE(693);
      END_STATE();
    case 696:
      if (lookahead == 'd') ADVANCE(918);
      END_STATE();
    case 697:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 698:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 699:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 700:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 701:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 702:
      if (lookahead == 'd') ADVANCE(1049);
      END_STATE();
    case 703:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 704:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 705:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 706:
      if (lookahead == 'd') ADVANCE(1053);
      END_STATE();
    case 707:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 708:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 709:
      if (lookahead == 'd') ADVANCE(1068);
      END_STATE();
    case 710:
      if (lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 711:
      if (lookahead == 'd') ADVANCE(1069);
      END_STATE();
    case 712:
      if (lookahead == 'd') ADVANCE(711);
      END_STATE();
    case 713:
      if (lookahead == 'd') ADVANCE(1431);
      if (lookahead == 'n') ADVANCE(1967);
      if (lookahead == 'p') ADVANCE(1977);
      END_STATE();
    case 714:
      if (lookahead == 'd') ADVANCE(1979);
      END_STATE();
    case 715:
      if (lookahead == 'd') ADVANCE(1432);
      if (lookahead == 'k') ADVANCE(973);
      END_STATE();
    case 716:
      if (lookahead == 'e') ADVANCE(2098);
      if (lookahead == 'h') ADVANCE(2575);
      if (lookahead == 'i') ADVANCE(1982);
      if (lookahead == 'l') ADVANCE(787);
      if (lookahead == 'o') ADVANCE(1611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 717:
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == 'i') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 718:
      if (lookahead == 'e') ADVANCE(793);
      if (lookahead == 'n') ADVANCE(1827);
      if (lookahead == 'o') ADVANCE(1242);
      END_STATE();
    case 719:
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 'f') ADVANCE(527);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(2694);
      if (lookahead == 'h') ADVANCE(2165);
      if (lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'r') ADVANCE(2579);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(3143);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(3147);
      END_STATE();
    case 723:
      if (lookahead == 'e') ADVANCE(3144);
      END_STATE();
    case 724:
      if (lookahead == 'e') ADVANCE(3146);
      END_STATE();
    case 725:
      if (lookahead == 'e') ADVANCE(3014);
      END_STATE();
    case 726:
      if (lookahead == 'e') ADVANCE(3012);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(2816);
      END_STATE();
    case 728:
      if (lookahead == 'e') ADVANCE(3053);
      END_STATE();
    case 729:
      if (lookahead == 'e') ADVANCE(2891);
      END_STATE();
    case 730:
      if (lookahead == 'e') ADVANCE(3020);
      END_STATE();
    case 731:
      if (lookahead == 'e') ADVANCE(2869);
      END_STATE();
    case 732:
      if (lookahead == 'e') ADVANCE(2839);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(3006);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(3023);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(3074);
      END_STATE();
    case 736:
      if (lookahead == 'e') ADVANCE(2938);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(2884);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(3052);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(2870);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(3050);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(3080);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(2834);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(3064);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(2958);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(2840);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(3075);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(2924);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(2922);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(2994);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(2926);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(2978);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(2904);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(3073);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(3003);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(2861);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(2832);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(3047);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(2925);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(3084);
      END_STATE();
    case 760:
      if (lookahead == 'e') ADVANCE(2927);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(2829);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(3027);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(3085);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(2843);
      END_STATE();
    case 765:
      if (lookahead == 'e') ADVANCE(3046);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(2833);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(2995);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(2897);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(2898);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(3045);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(2979);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(2936);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(3009);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(3078);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(2982);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(3029);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'i') ADVANCE(2453);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(2686);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(2462);
      if (lookahead == 'p') ADVANCE(804);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(2373);
      if (lookahead == 'i') ADVANCE(1644);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(2641);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(1781);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(2073);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(2730);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(2375);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(2656);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(2002);
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(2107);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(2726);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(1703);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'i') ADVANCE(1170);
      if (lookahead == 'k') ADVANCE(1318);
      if (lookahead == 'y') ADVANCE(1620);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(2181);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(2746);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(2388);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(2712);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(2100);
      if (lookahead == 'o') ADVANCE(2183);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(2751);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(2511);
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(2102);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(1110);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(2714);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(2355);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(2715);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(2716);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(821);
      if (lookahead == 'o') ADVANCE(2589);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(1614);
      END_STATE();
    case 821:
      if (lookahead == 'e') ADVANCE(2550);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(2132);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(2717);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(1712);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(2196);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(1617);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(2387);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(1618);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(2103);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(2720);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(1622);
      if (lookahead == 'p') ADVANCE(1244);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(2097);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(2721);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(1488);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(1085);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(1516);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(2006);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(2724);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(2077);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(1490);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(1491);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(2431);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(2270);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(1492);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(2112);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(2117);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(2284);
      END_STATE();
    case 854:
      if (lookahead == 'e') ADVANCE(2479);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(1496);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(2436);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 858:
      if (lookahead == 'e') ADVANCE(1498);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(2079);
      END_STATE();
    case 860:
      if (lookahead == 'e') ADVANCE(2289);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(988);
      END_STATE();
    case 862:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(2290);
      END_STATE();
    case 864:
      if (lookahead == 'e') ADVANCE(2291);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(2205);
      END_STATE();
    case 866:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(1522);
      END_STATE();
    case 868:
      if (lookahead == 'e') ADVANCE(2080);
      END_STATE();
    case 869:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 870:
      if (lookahead == 'e') ADVANCE(2081);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(2296);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(2297);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(1527);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(2299);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(2300);
      END_STATE();
    case 877:
      if (lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(2160);
      END_STATE();
    case 879:
      if (lookahead == 'e') ADVANCE(2302);
      END_STATE();
    case 880:
      if (lookahead == 'e') ADVANCE(2082);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(2303);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(2304);
      END_STATE();
    case 883:
      if (lookahead == 'e') ADVANCE(2447);
      END_STATE();
    case 884:
      if (lookahead == 'e') ADVANCE(2083);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(2171);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 887:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(2087);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(2130);
      END_STATE();
    case 890:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 891:
      if (lookahead == 'e') ADVANCE(2088);
      END_STATE();
    case 892:
      if (lookahead == 'e') ADVANCE(2091);
      END_STATE();
    case 893:
      if (lookahead == 'e') ADVANCE(2090);
      END_STATE();
    case 894:
      if (lookahead == 'e') ADVANCE(2093);
      END_STATE();
    case 895:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 896:
      if (lookahead == 'e') ADVANCE(2143);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 898:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 900:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 901:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 902:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 903:
      if (lookahead == 'e') ADVANCE(2366);
      END_STATE();
    case 904:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 905:
      if (lookahead == 'e') ADVANCE(2752);
      END_STATE();
    case 906:
      if (lookahead == 'e') ADVANCE(2695);
      END_STATE();
    case 907:
      if (lookahead == 'e') ADVANCE(2173);
      END_STATE();
    case 908:
      if (lookahead == 'e') ADVANCE(2643);
      END_STATE();
    case 909:
      if (lookahead == 'e') ADVANCE(1097);
      END_STATE();
    case 910:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 911:
      if (lookahead == 'e') ADVANCE(1636);
      END_STATE();
    case 912:
      if (lookahead == 'e') ADVANCE(2137);
      END_STATE();
    case 913:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 914:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 915:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 916:
      if (lookahead == 'e') ADVANCE(1645);
      END_STATE();
    case 917:
      if (lookahead == 'e') ADVANCE(2371);
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 918:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 919:
      if (lookahead == 'e') ADVANCE(1557);
      END_STATE();
    case 920:
      if (lookahead == 'e') ADVANCE(1750);
      END_STATE();
    case 921:
      if (lookahead == 'e') ADVANCE(2644);
      END_STATE();
    case 922:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 923:
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 'u') ADVANCE(521);
      END_STATE();
    case 924:
      if (lookahead == 'e') ADVANCE(1716);
      END_STATE();
    case 925:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 926:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 927:
      if (lookahead == 'e') ADVANCE(1723);
      END_STATE();
    case 928:
      if (lookahead == 'e') ADVANCE(2369);
      END_STATE();
    case 929:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 930:
      if (lookahead == 'e') ADVANCE(2729);
      END_STATE();
    case 931:
      if (lookahead == 'e') ADVANCE(2349);
      END_STATE();
    case 932:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 933:
      if (lookahead == 'e') ADVANCE(1734);
      END_STATE();
    case 934:
      if (lookahead == 'e') ADVANCE(1660);
      END_STATE();
    case 935:
      if (lookahead == 'e') ADVANCE(2012);
      END_STATE();
    case 936:
      if (lookahead == 'e') ADVANCE(2489);
      END_STATE();
    case 937:
      if (lookahead == 'e') ADVANCE(1821);
      if (lookahead == 'r') ADVANCE(819);
      END_STATE();
    case 938:
      if (lookahead == 'e') ADVANCE(2319);
      END_STATE();
    case 939:
      if (lookahead == 'e') ADVANCE(2732);
      END_STATE();
    case 940:
      if (lookahead == 'e') ADVANCE(2647);
      END_STATE();
    case 941:
      if (lookahead == 'e') ADVANCE(2737);
      END_STATE();
    case 942:
      if (lookahead == 'e') ADVANCE(2326);
      END_STATE();
    case 943:
      if (lookahead == 'e') ADVANCE(1726);
      END_STATE();
    case 944:
      if (lookahead == 'e') ADVANCE(2487);
      END_STATE();
    case 945:
      if (lookahead == 'e') ADVANCE(1719);
      END_STATE();
    case 946:
      if (lookahead == 'e') ADVANCE(2734);
      END_STATE();
    case 947:
      if (lookahead == 'e') ADVANCE(2692);
      END_STATE();
    case 948:
      if (lookahead == 'e') ADVANCE(1805);
      END_STATE();
    case 949:
      if (lookahead == 'e') ADVANCE(2648);
      END_STATE();
    case 950:
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 951:
      if (lookahead == 'e') ADVANCE(1721);
      END_STATE();
    case 952:
      if (lookahead == 'e') ADVANCE(1797);
      END_STATE();
    case 953:
      if (lookahead == 'e') ADVANCE(2649);
      END_STATE();
    case 954:
      if (lookahead == 'e') ADVANCE(2759);
      END_STATE();
    case 955:
      if (lookahead == 'e') ADVANCE(1743);
      END_STATE();
    case 956:
      if (lookahead == 'e') ADVANCE(2225);
      END_STATE();
    case 957:
      if (lookahead == 'e') ADVANCE(2148);
      END_STATE();
    case 958:
      if (lookahead == 'e') ADVANCE(1728);
      END_STATE();
    case 959:
      if (lookahead == 'e') ADVANCE(2650);
      END_STATE();
    case 960:
      if (lookahead == 'e') ADVANCE(2364);
      END_STATE();
    case 961:
      if (lookahead == 'e') ADVANCE(2215);
      END_STATE();
    case 962:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 963:
      if (lookahead == 'e') ADVANCE(2651);
      END_STATE();
    case 964:
      if (lookahead == 'e') ADVANCE(2740);
      END_STATE();
    case 965:
      if (lookahead == 'e') ADVANCE(1748);
      END_STATE();
    case 966:
      if (lookahead == 'e') ADVANCE(2151);
      END_STATE();
    case 967:
      if (lookahead == 'e') ADVANCE(2652);
      END_STATE();
    case 968:
      if (lookahead == 'e') ADVANCE(2741);
      END_STATE();
    case 969:
      if (lookahead == 'e') ADVANCE(1751);
      END_STATE();
    case 970:
      if (lookahead == 'e') ADVANCE(2653);
      END_STATE();
    case 971:
      if (lookahead == 'e') ADVANCE(1769);
      END_STATE();
    case 972:
      if (lookahead == 'e') ADVANCE(2654);
      END_STATE();
    case 973:
      if (lookahead == 'e') ADVANCE(2755);
      END_STATE();
    case 974:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 975:
      if (lookahead == 'e') ADVANCE(2765);
      END_STATE();
    case 976:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 977:
      if (lookahead == 'e') ADVANCE(2368);
      END_STATE();
    case 978:
      if (lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 979:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 980:
      if (lookahead == 'e') ADVANCE(2743);
      END_STATE();
    case 981:
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 982:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 983:
      if (lookahead == 'e') ADVANCE(2499);
      END_STATE();
    case 984:
      if (lookahead == 'e') ADVANCE(2559);
      END_STATE();
    case 985:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 986:
      if (lookahead == 'e') ADVANCE(1777);
      END_STATE();
    case 987:
      if (lookahead == 'e') ADVANCE(2381);
      if (lookahead == 'i') ADVANCE(2110);
      END_STATE();
    case 988:
      if (lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 989:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 990:
      if (lookahead == 'e') ADVANCE(2747);
      END_STATE();
    case 991:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 992:
      if (lookahead == 'e') ADVANCE(2698);
      END_STATE();
    case 993:
      if (lookahead == 'e') ADVANCE(2178);
      END_STATE();
    case 994:
      if (lookahead == 'e') ADVANCE(976);
      END_STATE();
    case 995:
      if (lookahead == 'e') ADVANCE(2689);
      END_STATE();
    case 996:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 997:
      if (lookahead == 'e') ADVANCE(2204);
      END_STATE();
    case 998:
      if (lookahead == 'e') ADVANCE(1794);
      END_STATE();
    case 999:
      if (lookahead == 'e') ADVANCE(2661);
      END_STATE();
    case 1000:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 1001:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 1002:
      if (lookahead == 'e') ADVANCE(2376);
      END_STATE();
    case 1003:
      if (lookahead == 'e') ADVANCE(2214);
      END_STATE();
    case 1004:
      if (lookahead == 'e') ADVANCE(1801);
      END_STATE();
    case 1005:
      if (lookahead == 'e') ADVANCE(2188);
      END_STATE();
    case 1006:
      if (lookahead == 'e') ADVANCE(2394);
      END_STATE();
    case 1007:
      if (lookahead == 'e') ADVANCE(1804);
      END_STATE();
    case 1008:
      if (lookahead == 'e') ADVANCE(2220);
      END_STATE();
    case 1009:
      if (lookahead == 'e') ADVANCE(2385);
      END_STATE();
    case 1010:
      if (lookahead == 'e') ADVANCE(2191);
      END_STATE();
    case 1011:
      if (lookahead == 'e') ADVANCE(2377);
      END_STATE();
    case 1012:
      if (lookahead == 'e') ADVANCE(1806);
      END_STATE();
    case 1013:
      if (lookahead == 'e') ADVANCE(2193);
      END_STATE();
    case 1014:
      if (lookahead == 'e') ADVANCE(2379);
      END_STATE();
    case 1015:
      if (lookahead == 'e') ADVANCE(2194);
      END_STATE();
    case 1016:
      if (lookahead == 'e') ADVANCE(2754);
      END_STATE();
    case 1017:
      if (lookahead == 'e') ADVANCE(1114);
      END_STATE();
    case 1018:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 1019:
      if (lookahead == 'e') ADVANCE(2218);
      END_STATE();
    case 1020:
      if (lookahead == 'e') ADVANCE(2206);
      END_STATE();
    case 1021:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 1022:
      if (lookahead == 'e') ADVANCE(2700);
      if (lookahead == 'l') ADVANCE(940);
      END_STATE();
    case 1023:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 1024:
      if (lookahead == 'e') ADVANCE(1813);
      END_STATE();
    case 1025:
      if (lookahead == 'e') ADVANCE(2760);
      END_STATE();
    case 1026:
      if (lookahead == 'e') ADVANCE(2221);
      END_STATE();
    case 1027:
      if (lookahead == 'e') ADVANCE(2761);
      END_STATE();
    case 1028:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 1029:
      if (lookahead == 'e') ADVANCE(2244);
      END_STATE();
    case 1030:
      if (lookahead == 'e') ADVANCE(1116);
      END_STATE();
    case 1031:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 1032:
      if (lookahead == 'e') ADVANCE(2246);
      END_STATE();
    case 1033:
      if (lookahead == 'e') ADVANCE(2216);
      END_STATE();
    case 1034:
      if (lookahead == 'e') ADVANCE(2701);
      END_STATE();
    case 1035:
      if (lookahead == 'e') ADVANCE(1817);
      END_STATE();
    case 1036:
      if (lookahead == 'e') ADVANCE(2229);
      END_STATE();
    case 1037:
      if (lookahead == 'e') ADVANCE(2251);
      END_STATE();
    case 1038:
      if (lookahead == 'e') ADVANCE(1119);
      END_STATE();
    case 1039:
      if (lookahead == 'e') ADVANCE(605);
      END_STATE();
    case 1040:
      if (lookahead == 'e') ADVANCE(2252);
      END_STATE();
    case 1041:
      if (lookahead == 'e') ADVANCE(2702);
      END_STATE();
    case 1042:
      if (lookahead == 'e') ADVANCE(2231);
      END_STATE();
    case 1043:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 1044:
      if (lookahead == 'e') ADVANCE(2227);
      END_STATE();
    case 1045:
      if (lookahead == 'e') ADVANCE(2703);
      if (lookahead == 'l') ADVANCE(959);
      END_STATE();
    case 1046:
      if (lookahead == 'e') ADVANCE(2256);
      END_STATE();
    case 1047:
      if (lookahead == 'e') ADVANCE(2704);
      if (lookahead == 'l') ADVANCE(967);
      END_STATE();
    case 1048:
      if (lookahead == 'e') ADVANCE(2705);
      if (lookahead == 's') ADVANCE(2585);
      END_STATE();
    case 1049:
      if (lookahead == 'e') ADVANCE(1120);
      END_STATE();
    case 1050:
      if (lookahead == 'e') ADVANCE(2763);
      END_STATE();
    case 1051:
      if (lookahead == 'e') ADVANCE(2249);
      END_STATE();
    case 1052:
      if (lookahead == 'e') ADVANCE(2262);
      END_STATE();
    case 1053:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 1054:
      if (lookahead == 'e') ADVANCE(2571);
      END_STATE();
    case 1055:
      if (lookahead == 'e') ADVANCE(2766);
      END_STATE();
    case 1056:
      if (lookahead == 'e') ADVANCE(2764);
      END_STATE();
    case 1057:
      if (lookahead == 'e') ADVANCE(2259);
      END_STATE();
    case 1058:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 1059:
      if (lookahead == 'e') ADVANCE(2260);
      END_STATE();
    case 1060:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 1061:
      if (lookahead == 'e') ADVANCE(2706);
      if (lookahead == 'h') ADVANCE(2242);
      if (lookahead == 't') ADVANCE(2708);
      END_STATE();
    case 1062:
      if (lookahead == 'e') ADVANCE(2406);
      END_STATE();
    case 1063:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 1064:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 1065:
      if (lookahead == 'e') ADVANCE(2264);
      END_STATE();
    case 1066:
      if (lookahead == 'e') ADVANCE(2268);
      END_STATE();
    case 1067:
      if (lookahead == 'e') ADVANCE(2767);
      END_STATE();
    case 1068:
      if (lookahead == 'e') ADVANCE(1819);
      END_STATE();
    case 1069:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 1070:
      if (lookahead == 'e') ADVANCE(2408);
      END_STATE();
    case 1071:
      if (lookahead == 'e') ADVANCE(2768);
      END_STATE();
    case 1072:
      if (lookahead == 'e') ADVANCE(2407);
      END_STATE();
    case 1073:
      if (lookahead == 'e') ADVANCE(2409);
      END_STATE();
    case 1074:
      if (lookahead == 'e') ADVANCE(1608);
      END_STATE();
    case 1075:
      if (lookahead == 'e') ADVANCE(2413);
      END_STATE();
    case 1076:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 1077:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 1078:
      if (lookahead == 'e') ADVANCE(1678);
      END_STATE();
    case 1079:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 1080:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 1081:
      if (lookahead == 'f') ADVANCE(631);
      END_STATE();
    case 1082:
      if (lookahead == 'f') ADVANCE(2886);
      END_STATE();
    case 1083:
      if (lookahead == 'f') ADVANCE(2814);
      END_STATE();
    case 1084:
      if (lookahead == 'f') ADVANCE(3045);
      END_STATE();
    case 1085:
      if (lookahead == 'f') ADVANCE(3009);
      END_STATE();
    case 1086:
      if (lookahead == 'f') ADVANCE(632);
      END_STATE();
    case 1087:
      if (lookahead == 'f') ADVANCE(633);
      END_STATE();
    case 1088:
      if (lookahead == 'f') ADVANCE(635);
      if (lookahead == 'r') ADVANCE(935);
      END_STATE();
    case 1089:
      if (lookahead == 'f') ADVANCE(2592);
      END_STATE();
    case 1090:
      if (lookahead == 'f') ADVANCE(1251);
      if (lookahead == 't') ADVANCE(1250);
      END_STATE();
    case 1091:
      if (lookahead == 'f') ADVANCE(2713);
      END_STATE();
    case 1092:
      if (lookahead == 'f') ADVANCE(387);
      END_STATE();
    case 1093:
      if (lookahead == 'f') ADVANCE(641);
      END_STATE();
    case 1094:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 1095:
      if (lookahead == 'f') ADVANCE(2576);
      END_STATE();
    case 1096:
      if (lookahead == 'f') ADVANCE(2124);
      if (lookahead == 'n') ADVANCE(1935);
      if (lookahead == 'o') ADVANCE(1575);
      if (lookahead == 'w') ADVANCE(985);
      END_STATE();
    case 1097:
      if (lookahead == 'f') ADVANCE(460);
      END_STATE();
    case 1098:
      if (lookahead == 'f') ADVANCE(1392);
      END_STATE();
    case 1099:
      if (lookahead == 'f') ADVANCE(299);
      END_STATE();
    case 1100:
      if (lookahead == 'f') ADVANCE(2733);
      END_STATE();
    case 1101:
      if (lookahead == 'f') ADVANCE(1253);
      if (lookahead == 'n') ADVANCE(1865);
      if (lookahead == 'p') ADVANCE(1911);
      END_STATE();
    case 1102:
      if (lookahead == 'f') ADVANCE(2162);
      END_STATE();
    case 1103:
      if (lookahead == 'f') ADVANCE(1312);
      END_STATE();
    case 1104:
      if (lookahead == 'f') ADVANCE(2030);
      END_STATE();
    case 1105:
      if (lookahead == 'f') ADVANCE(1533);
      END_STATE();
    case 1106:
      if (lookahead == 'f') ADVANCE(2136);
      END_STATE();
    case 1107:
      if (lookahead == 'f') ADVANCE(1888);
      END_STATE();
    case 1108:
      if (lookahead == 'f') ADVANCE(2334);
      END_STATE();
    case 1109:
      if (lookahead == 'f') ADVANCE(1895);
      END_STATE();
    case 1110:
      if (lookahead == 'f') ADVANCE(957);
      END_STATE();
    case 1111:
      if (lookahead == 'f') ADVANCE(593);
      END_STATE();
    case 1112:
      if (lookahead == 'f') ADVANCE(1342);
      END_STATE();
    case 1113:
      if (lookahead == 'f') ADVANCE(1387);
      END_STATE();
    case 1114:
      if (lookahead == 'f') ADVANCE(997);
      END_STATE();
    case 1115:
      if (lookahead == 'f') ADVANCE(1351);
      END_STATE();
    case 1116:
      if (lookahead == 'f') ADVANCE(1003);
      END_STATE();
    case 1117:
      if (lookahead == 'f') ADVANCE(1355);
      END_STATE();
    case 1118:
      if (lookahead == 'f') ADVANCE(172);
      END_STATE();
    case 1119:
      if (lookahead == 'f') ADVANCE(1008);
      END_STATE();
    case 1120:
      if (lookahead == 'f') ADVANCE(489);
      END_STATE();
    case 1121:
      if (lookahead == 'f') ADVANCE(467);
      END_STATE();
    case 1122:
      if (lookahead == 'f') ADVANCE(1404);
      END_STATE();
    case 1123:
      if (lookahead == 'f') ADVANCE(1413);
      END_STATE();
    case 1124:
      if (lookahead == 'f') ADVANCE(1411);
      END_STATE();
    case 1125:
      if (lookahead == 'f') ADVANCE(2265);
      END_STATE();
    case 1126:
      if (lookahead == 'f') ADVANCE(1410);
      END_STATE();
    case 1127:
      if (lookahead == 'f') ADVANCE(1415);
      END_STATE();
    case 1128:
      if (lookahead == 'f') ADVANCE(2412);
      END_STATE();
    case 1129:
      if (lookahead == 'f') ADVANCE(1428);
      END_STATE();
    case 1130:
      if (lookahead == 'g') ADVANCE(3030);
      END_STATE();
    case 1131:
      if (lookahead == 'g') ADVANCE(2876);
      END_STATE();
    case 1132:
      if (lookahead == 'g') ADVANCE(2956);
      END_STATE();
    case 1133:
      if (lookahead == 'g') ADVANCE(3012);
      END_STATE();
    case 1134:
      if (lookahead == 'g') ADVANCE(1789);
      END_STATE();
    case 1135:
      if (lookahead == 'g') ADVANCE(2917);
      END_STATE();
    case 1136:
      if (lookahead == 'g') ADVANCE(2844);
      END_STATE();
    case 1137:
      if (lookahead == 'g') ADVANCE(2957);
      END_STATE();
    case 1138:
      if (lookahead == 'g') ADVANCE(2845);
      END_STATE();
    case 1139:
      if (lookahead == 'g') ADVANCE(2916);
      END_STATE();
    case 1140:
      if (lookahead == 'g') ADVANCE(2864);
      END_STATE();
    case 1141:
      if (lookahead == 'g') ADVANCE(2846);
      END_STATE();
    case 1142:
      if (lookahead == 'g') ADVANCE(3045);
      END_STATE();
    case 1143:
      if (lookahead == 'g') ADVANCE(3024);
      END_STATE();
    case 1144:
      if (lookahead == 'g') ADVANCE(2936);
      END_STATE();
    case 1145:
      if (lookahead == 'g') ADVANCE(2982);
      END_STATE();
    case 1146:
      if (lookahead == 'g') ADVANCE(1764);
      if (lookahead == 'm') ADVANCE(2021);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 's') ADVANCE(1846);
      END_STATE();
    case 1147:
      if (lookahead == 'g') ADVANCE(791);
      if (lookahead == 'r') ADVANCE(1624);
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 1148:
      if (lookahead == 'g') ADVANCE(374);
      END_STATE();
    case 1149:
      if (lookahead == 'g') ADVANCE(2197);
      END_STATE();
    case 1150:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 1151:
      if (lookahead == 'g') ADVANCE(1987);
      END_STATE();
    case 1152:
      if (lookahead == 'g') ADVANCE(2271);
      END_STATE();
    case 1153:
      if (lookahead == 'g') ADVANCE(2280);
      END_STATE();
    case 1154:
      if (lookahead == 'g') ADVANCE(1831);
      END_STATE();
    case 1155:
      if (lookahead == 'g') ADVANCE(2270);
      END_STATE();
    case 1156:
      if (lookahead == 'g') ADVANCE(1832);
      END_STATE();
    case 1157:
      if (lookahead == 'g') ADVANCE(1993);
      END_STATE();
    case 1158:
      if (lookahead == 'g') ADVANCE(1802);
      END_STATE();
    case 1159:
      if (lookahead == 'g') ADVANCE(2459);
      END_STATE();
    case 1160:
      if (lookahead == 'g') ADVANCE(1994);
      END_STATE();
    case 1161:
      if (lookahead == 'g') ADVANCE(1814);
      END_STATE();
    case 1162:
      if (lookahead == 'g') ADVANCE(2286);
      END_STATE();
    case 1163:
      if (lookahead == 'g') ADVANCE(2288);
      END_STATE();
    case 1164:
      if (lookahead == 'g') ADVANCE(1833);
      END_STATE();
    case 1165:
      if (lookahead == 'g') ADVANCE(1835);
      END_STATE();
    case 1166:
      if (lookahead == 'g') ADVANCE(1836);
      END_STATE();
    case 1167:
      if (lookahead == 'g') ADVANCE(1837);
      END_STATE();
    case 1168:
      if (lookahead == 'g') ADVANCE(2118);
      END_STATE();
    case 1169:
      if (lookahead == 'g') ADVANCE(736);
      END_STATE();
    case 1170:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 1171:
      if (lookahead == 'g') ADVANCE(1839);
      END_STATE();
    case 1172:
      if (lookahead == 'g') ADVANCE(1840);
      END_STATE();
    case 1173:
      if (lookahead == 'g') ADVANCE(1841);
      END_STATE();
    case 1174:
      if (lookahead == 'g') ADVANCE(1893);
      END_STATE();
    case 1175:
      if (lookahead == 'g') ADVANCE(1894);
      END_STATE();
    case 1176:
      if (lookahead == 'g') ADVANCE(2120);
      END_STATE();
    case 1177:
      if (lookahead == 'g') ADVANCE(2307);
      END_STATE();
    case 1178:
      if (lookahead == 'g') ADVANCE(2084);
      END_STATE();
    case 1179:
      if (lookahead == 'g') ADVANCE(136);
      END_STATE();
    case 1180:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 1181:
      if (lookahead == 'g') ADVANCE(772);
      END_STATE();
    case 1182:
      if (lookahead == 'g') ADVANCE(1252);
      END_STATE();
    case 1183:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 1184:
      if (lookahead == 'g') ADVANCE(857);
      END_STATE();
    case 1185:
      if (lookahead == 'g') ADVANCE(1269);
      END_STATE();
    case 1186:
      if (lookahead == 'g') ADVANCE(2335);
      END_STATE();
    case 1187:
      if (lookahead == 'g') ADVANCE(2239);
      END_STATE();
    case 1188:
      if (lookahead == 'g') ADVANCE(942);
      END_STATE();
    case 1189:
      if (lookahead == 'g') ADVANCE(1279);
      END_STATE();
    case 1190:
      if (lookahead == 'g') ADVANCE(948);
      END_STATE();
    case 1191:
      if (lookahead == 'g') ADVANCE(1283);
      END_STATE();
    case 1192:
      if (lookahead == 'g') ADVANCE(898);
      END_STATE();
    case 1193:
      if (lookahead == 'g') ADVANCE(899);
      END_STATE();
    case 1194:
      if (lookahead == 'g') ADVANCE(878);
      END_STATE();
    case 1195:
      if (lookahead == 'g') ADVANCE(1783);
      if (lookahead == 'o') ADVANCE(1509);
      END_STATE();
    case 1196:
      if (lookahead == 'g') ADVANCE(1570);
      END_STATE();
    case 1197:
      if (lookahead == 'g') ADVANCE(1786);
      END_STATE();
    case 1198:
      if (lookahead == 'g') ADVANCE(1787);
      END_STATE();
    case 1199:
      if (lookahead == 'g') ADVANCE(1009);
      END_STATE();
    case 1200:
      if (lookahead == 'g') ADVANCE(1807);
      END_STATE();
    case 1201:
      if (lookahead == 'g') ADVANCE(1021);
      END_STATE();
    case 1202:
      if (lookahead == 'g') ADVANCE(1815);
      END_STATE();
    case 1203:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 1204:
      if (lookahead == 'g') ADVANCE(2247);
      END_STATE();
    case 1205:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 1206:
      if (lookahead == 'g') ADVANCE(1065);
      END_STATE();
    case 1207:
      if (lookahead == 'g') ADVANCE(1062);
      END_STATE();
    case 1208:
      if (lookahead == 'g') ADVANCE(1070);
      END_STATE();
    case 1209:
      if (lookahead == 'g') ADVANCE(1073);
      END_STATE();
    case 1210:
      if (lookahead == 'g') ADVANCE(1610);
      END_STATE();
    case 1211:
      if (lookahead == 'h') ADVANCE(2955);
      END_STATE();
    case 1212:
      if (lookahead == 'h') ADVANCE(2867);
      END_STATE();
    case 1213:
      if (lookahead == 'h') ADVANCE(2988);
      END_STATE();
    case 1214:
      if (lookahead == 'h') ADVANCE(3026);
      END_STATE();
    case 1215:
      if (lookahead == 'h') ADVANCE(1401);
      if (lookahead == 'v') ADVANCE(852);
      END_STATE();
    case 1216:
      if (lookahead == 'h') ADVANCE(2596);
      END_STATE();
    case 1217:
      if (lookahead == 'h') ADVANCE(807);
      END_STATE();
    case 1218:
      if (lookahead == 'h') ADVANCE(1851);
      END_STATE();
    case 1219:
      if (lookahead == 'h') ADVANCE(433);
      END_STATE();
    case 1220:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 1221:
      if (lookahead == 'h') ADVANCE(2109);
      END_STATE();
    case 1222:
      if (lookahead == 'h') ADVANCE(742);
      END_STATE();
    case 1223:
      if (lookahead == 'h') ADVANCE(161);
      END_STATE();
    case 1224:
      if (lookahead == 'h') ADVANCE(752);
      END_STATE();
    case 1225:
      if (lookahead == 'h') ADVANCE(843);
      END_STATE();
    case 1226:
      if (lookahead == 'h') ADVANCE(770);
      END_STATE();
    case 1227:
      if (lookahead == 'h') ADVANCE(1934);
      if (lookahead == 'o') ADVANCE(1604);
      if (lookahead == 'r') ADVANCE(1402);
      END_STATE();
    case 1228:
      if (lookahead == 'h') ADVANCE(405);
      END_STATE();
    case 1229:
      if (lookahead == 'h') ADVANCE(822);
      END_STATE();
    case 1230:
      if (lookahead == 'h') ADVANCE(1943);
      if (lookahead == 'o') ADVANCE(2195);
      END_STATE();
    case 1231:
      if (lookahead == 'h') ADVANCE(1337);
      END_STATE();
    case 1232:
      if (lookahead == 'h') ADVANCE(1905);
      END_STATE();
    case 1233:
      if (lookahead == 'h') ADVANCE(966);
      END_STATE();
    case 1234:
      if (lookahead == 'h') ADVANCE(1951);
      if (lookahead == 'o') ADVANCE(1605);
      END_STATE();
    case 1235:
      if (lookahead == 'h') ADVANCE(1369);
      END_STATE();
    case 1236:
      if (lookahead == 'h') ADVANCE(1051);
      END_STATE();
    case 1237:
      if (lookahead == 'h') ADVANCE(1057);
      END_STATE();
    case 1238:
      if (lookahead == 'h') ADVANCE(1059);
      END_STATE();
    case 1239:
      if (lookahead == 'h') ADVANCE(1063);
      END_STATE();
    case 1240:
      if (lookahead == 'h') ADVANCE(1426);
      END_STATE();
    case 1241:
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == 'k') ADVANCE(1983);
      END_STATE();
    case 1242:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 1243:
      if (lookahead == 'i') ADVANCE(2771);
      END_STATE();
    case 1244:
      if (lookahead == 'i') ADVANCE(3045);
      END_STATE();
    case 1245:
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead == 'n') ADVANCE(1457);
      END_STATE();
    case 1246:
      if (lookahead == 'i') ADVANCE(1995);
      END_STATE();
    case 1247:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 1248:
      if (lookahead == 'i') ADVANCE(1657);
      END_STATE();
    case 1249:
      if (lookahead == 'i') ADVANCE(1702);
      END_STATE();
    case 1250:
      if (lookahead == 'i') ADVANCE(1631);
      END_STATE();
    case 1251:
      if (lookahead == 'i') ADVANCE(1529);
      END_STATE();
    case 1252:
      if (lookahead == 'i') ADVANCE(1708);
      END_STATE();
    case 1253:
      if (lookahead == 'i') ADVANCE(1569);
      END_STATE();
    case 1254:
      if (lookahead == 'i') ADVANCE(1999);
      END_STATE();
    case 1255:
      if (lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 1256:
      if (lookahead == 'i') ADVANCE(1207);
      END_STATE();
    case 1257:
      if (lookahead == 'i') ADVANCE(1646);
      END_STATE();
    case 1258:
      if (lookahead == 'i') ADVANCE(2463);
      END_STATE();
    case 1259:
      if (lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 1260:
      if (lookahead == 'i') ADVANCE(1134);
      END_STATE();
    case 1261:
      if (lookahead == 'i') ADVANCE(1653);
      END_STATE();
    case 1262:
      if (lookahead == 'i') ADVANCE(1186);
      END_STATE();
    case 1263:
      if (lookahead == 'i') ADVANCE(1200);
      END_STATE();
    case 1264:
      if (lookahead == 'i') ADVANCE(2273);
      END_STATE();
    case 1265:
      if (lookahead == 'i') ADVANCE(1767);
      END_STATE();
    case 1266:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 1267:
      if (lookahead == 'i') ADVANCE(1197);
      END_STATE();
    case 1268:
      if (lookahead == 'i') ADVANCE(1098);
      END_STATE();
    case 1269:
      if (lookahead == 'i') ADVANCE(1682);
      END_STATE();
    case 1270:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 1271:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 1272:
      if (lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 1273:
      if (lookahead == 'i') ADVANCE(550);
      END_STATE();
    case 1274:
      if (lookahead == 'i') ADVANCE(2026);
      END_STATE();
    case 1275:
      if (lookahead == 'i') ADVANCE(1152);
      END_STATE();
    case 1276:
      if (lookahead == 'i') ADVANCE(1158);
      END_STATE();
    case 1277:
      if (lookahead == 'i') ADVANCE(1803);
      END_STATE();
    case 1278:
      if (lookahead == 'i') ADVANCE(1989);
      END_STATE();
    case 1279:
      if (lookahead == 'i') ADVANCE(1688);
      END_STATE();
    case 1280:
      if (lookahead == 'i') ADVANCE(1782);
      END_STATE();
    case 1281:
      if (lookahead == 'i') ADVANCE(1871);
      END_STATE();
    case 1282:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 1283:
      if (lookahead == 'i') ADVANCE(1690);
      END_STATE();
    case 1284:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 1285:
      if (lookahead == 'i') ADVANCE(1875);
      END_STATE();
    case 1286:
      if (lookahead == 'i') ADVANCE(1877);
      END_STATE();
    case 1287:
      if (lookahead == 'i') ADVANCE(1879);
      END_STATE();
    case 1288:
      if (lookahead == 'i') ADVANCE(1855);
      END_STATE();
    case 1289:
      if (lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 1290:
      if (lookahead == 'i') ADVANCE(1881);
      END_STATE();
    case 1291:
      if (lookahead == 'i') ADVANCE(2468);
      END_STATE();
    case 1292:
      if (lookahead == 'i') ADVANCE(1885);
      END_STATE();
    case 1293:
      if (lookahead == 'i') ADVANCE(2529);
      END_STATE();
    case 1294:
      if (lookahead == 'i') ADVANCE(2235);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 1295:
      if (lookahead == 'i') ADVANCE(2473);
      END_STATE();
    case 1296:
      if (lookahead == 'i') ADVANCE(2306);
      END_STATE();
    case 1297:
      if (lookahead == 'i') ADVANCE(1887);
      END_STATE();
    case 1298:
      if (lookahead == 'i') ADVANCE(1889);
      END_STATE();
    case 1299:
      if (lookahead == 'i') ADVANCE(1891);
      END_STATE();
    case 1300:
      if (lookahead == 'i') ADVANCE(2226);
      END_STATE();
    case 1301:
      if (lookahead == 'i') ADVANCE(2773);
      END_STATE();
    case 1302:
      if (lookahead == 'i') ADVANCE(2642);
      END_STATE();
    case 1303:
      if (lookahead == 'i') ADVANCE(1648);
      END_STATE();
    case 1304:
      if (lookahead == 'i') ADVANCE(2461);
      END_STATE();
    case 1305:
      if (lookahead == 'i') ADVANCE(1091);
      END_STATE();
    case 1306:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 1307:
      if (lookahead == 'i') ADVANCE(2003);
      END_STATE();
    case 1308:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 1309:
      if (lookahead == 'i') ADVANCE(1711);
      END_STATE();
    case 1310:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 1311:
      if (lookahead == 'i') ADVANCE(1188);
      END_STATE();
    case 1312:
      if (lookahead == 'i') ADVANCE(1536);
      END_STATE();
    case 1313:
      if (lookahead == 'i') ADVANCE(1915);
      END_STATE();
    case 1314:
      if (lookahead == 'i') ADVANCE(1161);
      END_STATE();
    case 1315:
      if (lookahead == 'i') ADVANCE(2772);
      END_STATE();
    case 1316:
      if (lookahead == 'i') ADVANCE(1183);
      END_STATE();
    case 1317:
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 1318:
      if (lookahead == 'i') ADVANCE(2009);
      END_STATE();
    case 1319:
      if (lookahead == 'i') ADVANCE(1714);
      END_STATE();
    case 1320:
      if (lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 1321:
      if (lookahead == 'i') ADVANCE(1924);
      END_STATE();
    case 1322:
      if (lookahead == 'i') ADVANCE(1179);
      END_STATE();
    case 1323:
      if (lookahead == 'i') ADVANCE(2645);
      END_STATE();
    case 1324:
      if (lookahead == 'i') ADVANCE(1715);
      END_STATE();
    case 1325:
      if (lookahead == 'i') ADVANCE(2139);
      END_STATE();
    case 1326:
      if (lookahead == 'i') ADVANCE(1155);
      END_STATE();
    case 1327:
      if (lookahead == 'i') ADVANCE(1932);
      END_STATE();
    case 1328:
      if (lookahead == 'i') ADVANCE(2146);
      END_STATE();
    case 1329:
      if (lookahead == 'i') ADVANCE(924);
      END_STATE();
    case 1330:
      if (lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 1331:
      if (lookahead == 'i') ADVANCE(1180);
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 1332:
      if (lookahead == 'i') ADVANCE(1717);
      END_STATE();
    case 1333:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 1334:
      if (lookahead == 'i') ADVANCE(1177);
      END_STATE();
    case 1335:
      if (lookahead == 'i') ADVANCE(1177);
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 1336:
      if (lookahead == 'i') ADVANCE(1937);
      END_STATE();
    case 1337:
      if (lookahead == 'i') ADVANCE(1742);
      END_STATE();
    case 1338:
      if (lookahead == 'i') ADVANCE(1941);
      END_STATE();
    case 1339:
      if (lookahead == 'i') ADVANCE(2147);
      END_STATE();
    case 1340:
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead == 'n') ADVANCE(2610);
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 1341:
      if (lookahead == 'i') ADVANCE(1766);
      END_STATE();
    case 1342:
      if (lookahead == 'i') ADVANCE(1549);
      END_STATE();
    case 1343:
      if (lookahead == 'i') ADVANCE(1945);
      END_STATE();
    case 1344:
      if (lookahead == 'i') ADVANCE(2478);
      END_STATE();
    case 1345:
      if (lookahead == 'i') ADVANCE(1747);
      END_STATE();
    case 1346:
      if (lookahead == 'i') ADVANCE(1773);
      END_STATE();
    case 1347:
      if (lookahead == 'i') ADVANCE(1640);
      END_STATE();
    case 1348:
      if (lookahead == 'i') ADVANCE(1949);
      END_STATE();
    case 1349:
      if (lookahead == 'i') ADVANCE(2149);
      END_STATE();
    case 1350:
      if (lookahead == 'i') ADVANCE(1724);
      END_STATE();
    case 1351:
      if (lookahead == 'i') ADVANCE(1551);
      END_STATE();
    case 1352:
      if (lookahead == 'i') ADVANCE(2150);
      END_STATE();
    case 1353:
      if (lookahead == 'i') ADVANCE(2342);
      END_STATE();
    case 1354:
      if (lookahead == 'i') ADVANCE(1727);
      END_STATE();
    case 1355:
      if (lookahead == 'i') ADVANCE(1552);
      END_STATE();
    case 1356:
      if (lookahead == 'i') ADVANCE(2152);
      END_STATE();
    case 1357:
      if (lookahead == 'i') ADVANCE(697);
      END_STATE();
    case 1358:
      if (lookahead == 'i') ADVANCE(1729);
      END_STATE();
    case 1359:
      if (lookahead == 'i') ADVANCE(1553);
      END_STATE();
    case 1360:
      if (lookahead == 'i') ADVANCE(2153);
      END_STATE();
    case 1361:
      if (lookahead == 'i') ADVANCE(955);
      END_STATE();
    case 1362:
      if (lookahead == 'i') ADVANCE(1752);
      END_STATE();
    case 1363:
      if (lookahead == 'i') ADVANCE(1730);
      END_STATE();
    case 1364:
      if (lookahead == 'i') ADVANCE(965);
      END_STATE();
    case 1365:
      if (lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 1366:
      if (lookahead == 'i') ADVANCE(1731);
      END_STATE();
    case 1367:
      if (lookahead == 'i') ADVANCE(2156);
      END_STATE();
    case 1368:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 1369:
      if (lookahead == 'i') ADVANCE(1735);
      END_STATE();
    case 1370:
      if (lookahead == 'i') ADVANCE(969);
      END_STATE();
    case 1371:
      if (lookahead == 'i') ADVANCE(1737);
      END_STATE();
    case 1372:
      if (lookahead == 'i') ADVANCE(971);
      END_STATE();
    case 1373:
      if (lookahead == 'i') ADVANCE(978);
      END_STATE();
    case 1374:
      if (lookahead == 'i') ADVANCE(2660);
      END_STATE();
    case 1375:
      if (lookahead == 'i') ADVANCE(1185);
      END_STATE();
    case 1376:
      if (lookahead == 'i') ADVANCE(2038);
      END_STATE();
    case 1377:
      if (lookahead == 'i') ADVANCE(2508);
      END_STATE();
    case 1378:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 1379:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 1380:
      if (lookahead == 'i') ADVANCE(2212);
      END_STATE();
    case 1381:
      if (lookahead == 'i') ADVANCE(1784);
      END_STATE();
    case 1382:
      if (lookahead == 'i') ADVANCE(1650);
      END_STATE();
    case 1383:
      if (lookahead == 'i') ADVANCE(1588);
      END_STATE();
    case 1384:
      if (lookahead == 'i') ADVANCE(2378);
      END_STATE();
    case 1385:
      if (lookahead == 'i') ADVANCE(1189);
      END_STATE();
    case 1386:
      if (lookahead == 'i') ADVANCE(2383);
      END_STATE();
    case 1387:
      if (lookahead == 'i') ADVANCE(1581);
      END_STATE();
    case 1388:
      if (lookahead == 'i') ADVANCE(2045);
      END_STATE();
    case 1389:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 1390:
      if (lookahead == 'i') ADVANCE(1969);
      END_STATE();
    case 1391:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 1392:
      if (lookahead == 'i') ADVANCE(608);
      END_STATE();
    case 1393:
      if (lookahead == 'i') ADVANCE(1191);
      END_STATE();
    case 1394:
      if (lookahead == 'i') ADVANCE(2050);
      END_STATE();
    case 1395:
      if (lookahead == 'i') ADVANCE(1947);
      END_STATE();
    case 1396:
      if (lookahead == 'i') ADVANCE(2052);
      END_STATE();
    case 1397:
      if (lookahead == 'i') ADVANCE(2055);
      END_STATE();
    case 1398:
      if (lookahead == 'i') ADVANCE(963);
      END_STATE();
    case 1399:
      if (lookahead == 'i') ADVANCE(972);
      END_STATE();
    case 1400:
      if (lookahead == 'i') ADVANCE(2037);
      if (lookahead == 'o') ADVANCE(1677);
      END_STATE();
    case 1401:
      if (lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 1402:
      if (lookahead == 'i') ADVANCE(1661);
      END_STATE();
    case 1403:
      if (lookahead == 'i') ADVANCE(1663);
      if (lookahead == 'l') ADVANCE(1870);
      if (lookahead == 'r') ADVANCE(944);
      END_STATE();
    case 1404:
      if (lookahead == 'i') ADVANCE(1591);
      END_STATE();
    case 1405:
      if (lookahead == 'i') ADVANCE(1199);
      END_STATE();
    case 1406:
      if (lookahead == 'i') ADVANCE(1798);
      END_STATE();
    case 1407:
      if (lookahead == 'i') ADVANCE(1198);
      END_STATE();
    case 1408:
      if (lookahead == 'i') ADVANCE(2556);
      END_STATE();
    case 1409:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 1410:
      if (lookahead == 'i') ADVANCE(1597);
      END_STATE();
    case 1411:
      if (lookahead == 'i') ADVANCE(609);
      END_STATE();
    case 1412:
      if (lookahead == 'i') ADVANCE(1666);
      if (lookahead == 'l') ADVANCE(1959);
      if (lookahead == 'r') ADVANCE(1054);
      END_STATE();
    case 1413:
      if (lookahead == 'i') ADVANCE(1598);
      END_STATE();
    case 1414:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 1415:
      if (lookahead == 'i') ADVANCE(1599);
      END_STATE();
    case 1416:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 1417:
      if (lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 1418:
      if (lookahead == 'i') ADVANCE(2398);
      END_STATE();
    case 1419:
      if (lookahead == 'i') ADVANCE(1203);
      END_STATE();
    case 1420:
      if (lookahead == 'i') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(2637);
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 1421:
      if (lookahead == 'i') ADVANCE(1971);
      END_STATE();
    case 1422:
      if (lookahead == 'i') ADVANCE(1205);
      END_STATE();
    case 1423:
      if (lookahead == 'i') ADVANCE(1124);
      END_STATE();
    case 1424:
      if (lookahead == 'i') ADVANCE(1202);
      END_STATE();
    case 1425:
      if (lookahead == 'i') ADVANCE(2414);
      END_STATE();
    case 1426:
      if (lookahead == 'i') ADVANCE(710);
      END_STATE();
    case 1427:
      if (lookahead == 'i') ADVANCE(2066);
      if (lookahead == 'o') ADVANCE(2612);
      END_STATE();
    case 1428:
      if (lookahead == 'i') ADVANCE(1822);
      END_STATE();
    case 1429:
      if (lookahead == 'i') ADVANCE(2068);
      END_STATE();
    case 1430:
      if (lookahead == 'i') ADVANCE(2069);
      END_STATE();
    case 1431:
      if (lookahead == 'i') ADVANCE(1208);
      END_STATE();
    case 1432:
      if (lookahead == 'i') ADVANCE(1209);
      END_STATE();
    case 1433:
      if (lookahead == 'k') ADVANCE(18);
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 1434:
      if (lookahead == 'k') ADVANCE(2874);
      END_STATE();
    case 1435:
      if (lookahead == 'k') ADVANCE(2875);
      END_STATE();
    case 1436:
      if (lookahead == 'k') ADVANCE(2915);
      END_STATE();
    case 1437:
      if (lookahead == 'k') ADVANCE(2987);
      END_STATE();
    case 1438:
      if (lookahead == 'k') ADVANCE(3045);
      END_STATE();
    case 1439:
      if (lookahead == 'k') ADVANCE(3076);
      END_STATE();
    case 1440:
      if (lookahead == 'k') ADVANCE(786);
      if (lookahead == 's') ADVANCE(2465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 1441:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 1442:
      if (lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 1443:
      if (lookahead == 'k') ADVANCE(905);
      if (lookahead == 'n') ADVANCE(1962);
      if (lookahead == 'p') ADVANCE(1974);
      END_STATE();
    case 1444:
      if (lookahead == 'k') ADVANCE(645);
      END_STATE();
    case 1445:
      if (lookahead == 'k') ADVANCE(646);
      END_STATE();
    case 1446:
      if (lookahead == 'k') ADVANCE(801);
      END_STATE();
    case 1447:
      if (lookahead == 'k') ADVANCE(2298);
      END_STATE();
    case 1448:
      if (lookahead == 'k') ADVANCE(812);
      END_STATE();
    case 1449:
      if (lookahead == 'k') ADVANCE(815);
      END_STATE();
    case 1450:
      if (lookahead == 'k') ADVANCE(817);
      END_STATE();
    case 1451:
      if (lookahead == 'k') ADVANCE(51);
      END_STATE();
    case 1452:
      if (lookahead == 'k') ADVANCE(823);
      END_STATE();
    case 1453:
      if (lookahead == 'k') ADVANCE(832);
      END_STATE();
    case 1454:
      if (lookahead == 'k') ADVANCE(835);
      END_STATE();
    case 1455:
      if (lookahead == 'k') ADVANCE(841);
      if (lookahead == 'n') ADVANCE(1966);
      if (lookahead == 'o') ADVANCE(1749);
      if (lookahead == 'p') ADVANCE(1234);
      if (lookahead == 's') ADVANCE(1331);
      if (lookahead == 'u') ADVANCE(1420);
      END_STATE();
    case 1456:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 1457:
      if (lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 1458:
      if (lookahead == 'k') ADVANCE(2586);
      END_STATE();
    case 1459:
      if (lookahead == 'k') ADVANCE(2586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 1460:
      if (lookahead == 'k') ADVANCE(1771);
      END_STATE();
    case 1461:
      if (lookahead == 'k') ADVANCE(1775);
      END_STATE();
    case 1462:
      if (lookahead == 'k') ADVANCE(883);
      END_STATE();
    case 1463:
      if (lookahead == 'k') ADVANCE(2595);
      END_STATE();
    case 1464:
      if (lookahead == 'k') ADVANCE(936);
      END_STATE();
    case 1465:
      if (lookahead == 'k') ADVANCE(2351);
      END_STATE();
    case 1466:
      if (lookahead == 'k') ADVANCE(671);
      END_STATE();
    case 1467:
      if (lookahead == 'k') ADVANCE(888);
      END_STATE();
    case 1468:
      if (lookahead == 'k') ADVANCE(930);
      if (lookahead == 'p') ADVANCE(1465);
      END_STATE();
    case 1469:
      if (lookahead == 'k') ADVANCE(954);
      END_STATE();
    case 1470:
      if (lookahead == 'k') ADVANCE(990);
      END_STATE();
    case 1471:
      if (lookahead == 'k') ADVANCE(939);
      END_STATE();
    case 1472:
      if (lookahead == 'k') ADVANCE(964);
      END_STATE();
    case 1473:
      if (lookahead == 'k') ADVANCE(946);
      END_STATE();
    case 1474:
      if (lookahead == 'k') ADVANCE(968);
      END_STATE();
    case 1475:
      if (lookahead == 'k') ADVANCE(975);
      END_STATE();
    case 1476:
      if (lookahead == 'k') ADVANCE(980);
      END_STATE();
    case 1477:
      if (lookahead == 'k') ADVANCE(192);
      END_STATE();
    case 1478:
      if (lookahead == 'k') ADVANCE(1027);
      END_STATE();
    case 1479:
      if (lookahead == 'k') ADVANCE(194);
      END_STATE();
    case 1480:
      if (lookahead == 'k') ADVANCE(1050);
      END_STATE();
    case 1481:
      if (lookahead == 'k') ADVANCE(1055);
      END_STATE();
    case 1482:
      if (lookahead == 'k') ADVANCE(1056);
      if (lookahead == 'r') ADVANCE(1031);
      END_STATE();
    case 1483:
      if (lookahead == 'k') ADVANCE(237);
      END_STATE();
    case 1484:
      if (lookahead == 'k') ADVANCE(1067);
      if (lookahead == 'n') ADVANCE(1958);
      if (lookahead == 'o') ADVANCE(1709);
      if (lookahead == 'p') ADVANCE(1227);
      if (lookahead == 's') ADVANCE(917);
      if (lookahead == 'u') ADVANCE(1340);
      END_STATE();
    case 1485:
      if (lookahead == 'l') ADVANCE(3014);
      END_STATE();
    case 1486:
      if (lookahead == 'l') ADVANCE(3012);
      END_STATE();
    case 1487:
      if (lookahead == 'l') ADVANCE(2885);
      END_STATE();
    case 1488:
      if (lookahead == 'l') ADVANCE(3028);
      END_STATE();
    case 1489:
      if (lookahead == 'l') ADVANCE(2974);
      END_STATE();
    case 1490:
      if (lookahead == 'l') ADVANCE(2826);
      END_STATE();
    case 1491:
      if (lookahead == 'l') ADVANCE(2964);
      END_STATE();
    case 1492:
      if (lookahead == 'l') ADVANCE(2969);
      END_STATE();
    case 1493:
      if (lookahead == 'l') ADVANCE(3062);
      END_STATE();
    case 1494:
      if (lookahead == 'l') ADVANCE(3060);
      END_STATE();
    case 1495:
      if (lookahead == 'l') ADVANCE(3061);
      END_STATE();
    case 1496:
      if (lookahead == 'l') ADVANCE(2827);
      END_STATE();
    case 1497:
      if (lookahead == 'l') ADVANCE(3063);
      END_STATE();
    case 1498:
      if (lookahead == 'l') ADVANCE(2967);
      END_STATE();
    case 1499:
      if (lookahead == 'l') ADVANCE(2966);
      END_STATE();
    case 1500:
      if (lookahead == 'l') ADVANCE(3089);
      END_STATE();
    case 1501:
      if (lookahead == 'l') ADVANCE(2979);
      END_STATE();
    case 1502:
      if (lookahead == 'l') ADVANCE(3076);
      END_STATE();
    case 1503:
      if (lookahead == 'l') ADVANCE(3009);
      END_STATE();
    case 1504:
      if (lookahead == 'l') ADVANCE(3078);
      END_STATE();
    case 1505:
      if (lookahead == 'l') ADVANCE(1517);
      END_STATE();
    case 1506:
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'n') ADVANCE(692);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 1507:
      if (lookahead == 'l') ADVANCE(808);
      if (lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 1508:
      if (lookahead == 'l') ADVANCE(2608);
      END_STATE();
    case 1509:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 1510:
      if (lookahead == 'l') ADVANCE(2683);
      if (lookahead == 's') ADVANCE(1439);
      if (lookahead == 'u') ADVANCE(2497);
      END_STATE();
    case 1511:
      if (lookahead == 'l') ADVANCE(2710);
      END_STATE();
    case 1512:
      if (lookahead == 'l') ADVANCE(1563);
      if (lookahead == 'r') ADVANCE(1651);
      if (lookahead == 's') ADVANCE(1483);
      if (lookahead == 'u') ADVANCE(2466);
      END_STATE();
    case 1513:
      if (lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 1514:
      if (lookahead == 'l') ADVANCE(2709);
      END_STATE();
    case 1515:
      if (lookahead == 'l') ADVANCE(1386);
      END_STATE();
    case 1516:
      if (lookahead == 'l') ADVANCE(1108);
      END_STATE();
    case 1517:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 1518:
      if (lookahead == 'l') ADVANCE(2711);
      END_STATE();
    case 1519:
      if (lookahead == 'l') ADVANCE(2520);
      END_STATE();
    case 1520:
      if (lookahead == 'l') ADVANCE(1487);
      END_STATE();
    case 1521:
      if (lookahead == 'l') ADVANCE(1154);
      END_STATE();
    case 1522:
      if (lookahead == 'l') ADVANCE(1083);
      END_STATE();
    case 1523:
      if (lookahead == 'l') ADVANCE(2718);
      END_STATE();
    case 1524:
      if (lookahead == 'l') ADVANCE(2274);
      END_STATE();
    case 1525:
      if (lookahead == 'l') ADVANCE(1306);
      END_STATE();
    case 1526:
      if (lookahead == 'l') ADVANCE(2722);
      END_STATE();
    case 1527:
      if (lookahead == 'l') ADVANCE(1085);
      END_STATE();
    case 1528:
      if (lookahead == 'l') ADVANCE(1869);
      END_STATE();
    case 1529:
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 1530:
      if (lookahead == 'l') ADVANCE(1378);
      END_STATE();
    case 1531:
      if (lookahead == 'l') ADVANCE(1273);
      END_STATE();
    case 1532:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 1533:
      if (lookahead == 'l') ADVANCE(1308);
      END_STATE();
    case 1534:
      if (lookahead == 'l') ADVANCE(1353);
      END_STATE();
    case 1535:
      if (lookahead == 'l') ADVANCE(1873);
      END_STATE();
    case 1536:
      if (lookahead == 'l') ADVANCE(2530);
      END_STATE();
    case 1537:
      if (lookahead == 'l') ADVANCE(1880);
      END_STATE();
    case 1538:
      if (lookahead == 'l') ADVANCE(1856);
      END_STATE();
    case 1539:
      if (lookahead == 'l') ADVANCE(2448);
      END_STATE();
    case 1540:
      if (lookahead == 'l') ADVANCE(738);
      END_STATE();
    case 1541:
      if (lookahead == 'l') ADVANCE(2449);
      END_STATE();
    case 1542:
      if (lookahead == 'l') ADVANCE(2307);
      END_STATE();
    case 1543:
      if (lookahead == 'l') ADVANCE(740);
      END_STATE();
    case 1544:
      if (lookahead == 'l') ADVANCE(741);
      END_STATE();
    case 1545:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 1546:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 1547:
      if (lookahead == 'l') ADVANCE(745);
      END_STATE();
    case 1548:
      if (lookahead == 'l') ADVANCE(1956);
      if (lookahead == 's') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 1549:
      if (lookahead == 'l') ADVANCE(749);
      END_STATE();
    case 1550:
      if (lookahead == 'l') ADVANCE(753);
      END_STATE();
    case 1551:
      if (lookahead == 'l') ADVANCE(764);
      END_STATE();
    case 1552:
      if (lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 1553:
      if (lookahead == 'l') ADVANCE(773);
      END_STATE();
    case 1554:
      if (lookahead == 'l') ADVANCE(1442);
      END_STATE();
    case 1555:
      if (lookahead == 'l') ADVANCE(1909);
      if (lookahead == 'w') ADVANCE(367);
      END_STATE();
    case 1556:
      if (lookahead == 'l') ADVANCE(1156);
      END_STATE();
    case 1557:
      if (lookahead == 'l') ADVANCE(1595);
      END_STATE();
    case 1558:
      if (lookahead == 'l') ADVANCE(1545);
      END_STATE();
    case 1559:
      if (lookahead == 'l') ADVANCE(1164);
      END_STATE();
    case 1560:
      if (lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 1561:
      if (lookahead == 'l') ADVANCE(866);
      END_STATE();
    case 1562:
      if (lookahead == 'l') ADVANCE(1259);
      END_STATE();
    case 1563:
      if (lookahead == 'l') ADVANCE(1927);
      END_STATE();
    case 1564:
      if (lookahead == 'l') ADVANCE(1165);
      END_STATE();
    case 1565:
      if (lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 1566:
      if (lookahead == 'l') ADVANCE(1166);
      END_STATE();
    case 1567:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 1568:
      if (lookahead == 'l') ADVANCE(1167);
      END_STATE();
    case 1569:
      if (lookahead == 'l') ADVANCE(927);
      END_STATE();
    case 1570:
      if (lookahead == 'l') ADVANCE(922);
      END_STATE();
    case 1571:
      if (lookahead == 'l') ADVANCE(1171);
      END_STATE();
    case 1572:
      if (lookahead == 'l') ADVANCE(886);
      END_STATE();
    case 1573:
      if (lookahead == 'l') ADVANCE(1280);
      END_STATE();
    case 1574:
      if (lookahead == 'l') ADVANCE(1172);
      END_STATE();
    case 1575:
      if (lookahead == 'l') ADVANCE(672);
      END_STATE();
    case 1576:
      if (lookahead == 'l') ADVANCE(1173);
      END_STATE();
    case 1577:
      if (lookahead == 'l') ADVANCE(951);
      END_STATE();
    case 1578:
      if (lookahead == 'l') ADVANCE(1174);
      END_STATE();
    case 1579:
      if (lookahead == 'l') ADVANCE(1175);
      END_STATE();
    case 1580:
      if (lookahead == 'l') ADVANCE(2488);
      END_STATE();
    case 1581:
      if (lookahead == 'l') ADVANCE(933);
      END_STATE();
    case 1582:
      if (lookahead == 'l') ADVANCE(915);
      END_STATE();
    case 1583:
      if (lookahead == 'l') ADVANCE(2744);
      END_STATE();
    case 1584:
      if (lookahead == 'l') ADVANCE(901);
      END_STATE();
    case 1585:
      if (lookahead == 'l') ADVANCE(2501);
      END_STATE();
    case 1586:
      if (lookahead == 'l') ADVANCE(2502);
      END_STATE();
    case 1587:
      if (lookahead == 'l') ADVANCE(1357);
      END_STATE();
    case 1588:
      if (lookahead == 'l') ADVANCE(2531);
      END_STATE();
    case 1589:
      if (lookahead == 'l') ADVANCE(1379);
      END_STATE();
    case 1590:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 1591:
      if (lookahead == 'l') ADVANCE(1007);
      END_STATE();
    case 1592:
      if (lookahead == 'l') ADVANCE(1381);
      END_STATE();
    case 1593:
      if (lookahead == 'l') ADVANCE(953);
      END_STATE();
    case 1594:
      if (lookahead == 'l') ADVANCE(970);
      END_STATE();
    case 1595:
      if (lookahead == 'l') ADVANCE(1363);
      END_STATE();
    case 1596:
      if (lookahead == 'l') ADVANCE(1389);
      END_STATE();
    case 1597:
      if (lookahead == 'l') ADVANCE(1024);
      END_STATE();
    case 1598:
      if (lookahead == 'l') ADVANCE(1012);
      END_STATE();
    case 1599:
      if (lookahead == 'l') ADVANCE(1035);
      END_STATE();
    case 1600:
      if (lookahead == 'l') ADVANCE(1409);
      END_STATE();
    case 1601:
      if (lookahead == 'l') ADVANCE(2404);
      END_STATE();
    case 1602:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 1603:
      if (lookahead == 'l') ADVANCE(1414);
      END_STATE();
    case 1604:
      if (lookahead == 'l') ADVANCE(1416);
      END_STATE();
    case 1605:
      if (lookahead == 'l') ADVANCE(1417);
      END_STATE();
    case 1606:
      if (lookahead == 'l') ADVANCE(2639);
      END_STATE();
    case 1607:
      if (lookahead == 'l') ADVANCE(1425);
      END_STATE();
    case 1608:
      if (lookahead == 'l') ADVANCE(1128);
      END_STATE();
    case 1609:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 1610:
      if (lookahead == 'l') ADVANCE(1077);
      END_STATE();
    case 1611:
      if (lookahead == 'm') ADVANCE(1612);
      END_STATE();
    case 1612:
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'p') ADVANCE(1507);
      END_STATE();
    case 1613:
      if (lookahead == 'm') ADVANCE(2989);
      END_STATE();
    case 1614:
      if (lookahead == 'm') ADVANCE(2847);
      END_STATE();
    case 1615:
      if (lookahead == 'm') ADVANCE(2990);
      END_STATE();
    case 1616:
      if (lookahead == 'm') ADVANCE(2909);
      END_STATE();
    case 1617:
      if (lookahead == 'm') ADVANCE(2848);
      END_STATE();
    case 1618:
      if (lookahead == 'm') ADVANCE(2823);
      END_STATE();
    case 1619:
      if (lookahead == 'm') ADVANCE(1304);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 'x') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 1620:
      if (lookahead == 'm') ADVANCE(1469);
      END_STATE();
    case 1621:
      if (lookahead == 'm') ADVANCE(1649);
      END_STATE();
    case 1622:
      if (lookahead == 'm') ADVANCE(1902);
      END_STATE();
    case 1623:
      if (lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 1624:
      if (lookahead == 'm') ADVANCE(1761);
      END_STATE();
    case 1625:
      if (lookahead == 'm') ADVANCE(1858);
      END_STATE();
    case 1626:
      if (lookahead == 'm') ADVANCE(2587);
      if (lookahead == 'n') ADVANCE(999);
      if (lookahead == 'o') ADVANCE(1705);
      END_STATE();
    case 1627:
      if (lookahead == 'm') ADVANCE(2004);
      END_STATE();
    case 1628:
      if (lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 1629:
      if (lookahead == 'm') ADVANCE(1418);
      END_STATE();
    case 1630:
      if (lookahead == 'm') ADVANCE(2022);
      END_STATE();
    case 1631:
      if (lookahead == 'm') ADVANCE(729);
      END_STATE();
    case 1632:
      if (lookahead == 'm') ADVANCE(911);
      END_STATE();
    case 1633:
      if (lookahead == 'm') ADVANCE(743);
      END_STATE();
    case 1634:
      if (lookahead == 'm') ADVANCE(744);
      END_STATE();
    case 1635:
      if (lookahead == 'm') ADVANCE(820);
      END_STATE();
    case 1636:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 1637:
      if (lookahead == 'm') ADVANCE(754);
      END_STATE();
    case 1638:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 1639:
      if (lookahead == 'm') ADVANCE(827);
      END_STATE();
    case 1640:
      if (lookahead == 'm') ADVANCE(757);
      END_STATE();
    case 1641:
      if (lookahead == 'm') ADVANCE(768);
      END_STATE();
    case 1642:
      if (lookahead == 'm') ADVANCE(829);
      END_STATE();
    case 1643:
      if (lookahead == 'm') ADVANCE(769);
      END_STATE();
    case 1644:
      if (lookahead == 'm') ADVANCE(401);
      END_STATE();
    case 1645:
      if (lookahead == 'm') ADVANCE(1933);
      END_STATE();
    case 1646:
      if (lookahead == 'm') ADVANCE(1072);
      END_STATE();
    case 1647:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 1648:
      if (lookahead == 'm') ADVANCE(404);
      END_STATE();
    case 1649:
      if (lookahead == 'm') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(2210);
      END_STATE();
    case 1650:
      if (lookahead == 'm') ADVANCE(408);
      END_STATE();
    case 1651:
      if (lookahead == 'm') ADVANCE(1884);
      END_STATE();
    case 1652:
      if (lookahead == 'm') ADVANCE(863);
      END_STATE();
    case 1653:
      if (lookahead == 'm') ADVANCE(897);
      END_STATE();
    case 1654:
      if (lookahead == 'm') ADVANCE(872);
      END_STATE();
    case 1655:
      if (lookahead == 'm') ADVANCE(875);
      END_STATE();
    case 1656:
      if (lookahead == 'm') ADVANCE(1344);
      if (lookahead == 's') ADVANCE(2470);
      END_STATE();
    case 1657:
      if (lookahead == 'm') ADVANCE(2029);
      END_STATE();
    case 1658:
      if (lookahead == 'm') ADVANCE(1780);
      END_STATE();
    case 1659:
      if (lookahead == 'm') ADVANCE(1942);
      END_STATE();
    case 1660:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 1661:
      if (lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 1662:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 1663:
      if (lookahead == 'm') ADVANCE(2032);
      END_STATE();
    case 1664:
      if (lookahead == 'm') ADVANCE(1946);
      END_STATE();
    case 1665:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 1666:
      if (lookahead == 'm') ADVANCE(2034);
      END_STATE();
    case 1667:
      if (lookahead == 'm') ADVANCE(1952);
      END_STATE();
    case 1668:
      if (lookahead == 'm') ADVANCE(1953);
      END_STATE();
    case 1669:
      if (lookahead == 'm') ADVANCE(1954);
      END_STATE();
    case 1670:
      if (lookahead == 'm') ADVANCE(1955);
      END_STATE();
    case 1671:
      if (lookahead == 'm') ADVANCE(2040);
      END_STATE();
    case 1672:
      if (lookahead == 'm') ADVANCE(1384);
      END_STATE();
    case 1673:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 1674:
      if (lookahead == 'm') ADVANCE(1408);
      if (lookahead == 'n') ADVANCE(614);
      if (lookahead == 's') ADVANCE(623);
      if (lookahead == 'x') ADVANCE(2031);
      END_STATE();
    case 1675:
      if (lookahead == 'm') ADVANCE(2060);
      END_STATE();
    case 1676:
      if (lookahead == 'm') ADVANCE(2064);
      END_STATE();
    case 1677:
      if (lookahead == 'm') ADVANCE(2065);
      END_STATE();
    case 1678:
      if (lookahead == 'm') ADVANCE(524);
      END_STATE();
    case 1679:
      if (lookahead == 'n') ADVANCE(539);
      END_STATE();
    case 1680:
      if (lookahead == 'n') ADVANCE(3014);
      END_STATE();
    case 1681:
      if (lookahead == 'n') ADVANCE(3012);
      END_STATE();
    case 1682:
      if (lookahead == 'n') ADVANCE(3008);
      END_STATE();
    case 1683:
      if (lookahead == 'n') ADVANCE(2893);
      END_STATE();
    case 1684:
      if (lookahead == 'n') ADVANCE(3057);
      END_STATE();
    case 1685:
      if (lookahead == 'n') ADVANCE(3055);
      END_STATE();
    case 1686:
      if (lookahead == 'n') ADVANCE(3056);
      END_STATE();
    case 1687:
      if (lookahead == 'n') ADVANCE(3059);
      END_STATE();
    case 1688:
      if (lookahead == 'n') ADVANCE(3077);
      END_STATE();
    case 1689:
      if (lookahead == 'n') ADVANCE(2894);
      END_STATE();
    case 1690:
      if (lookahead == 'n') ADVANCE(2866);
      END_STATE();
    case 1691:
      if (lookahead == 'n') ADVANCE(2888);
      END_STATE();
    case 1692:
      if (lookahead == 'n') ADVANCE(2849);
      END_STATE();
    case 1693:
      if (lookahead == 'n') ADVANCE(2850);
      END_STATE();
    case 1694:
      if (lookahead == 'n') ADVANCE(2987);
      END_STATE();
    case 1695:
      if (lookahead == 'n') ADVANCE(3009);
      END_STATE();
    case 1696:
      if (lookahead == 'n') ADVANCE(2580);
      if (lookahead == 'r') ADVANCE(1908);
      END_STATE();
    case 1697:
      if (lookahead == 'n') ADVANCE(1149);
      if (lookahead == 's') ADVANCE(800);
      if (lookahead == 't') ADVANCE(1080);
      END_STATE();
    case 1698:
      if (lookahead == 'n') ADVANCE(1196);
      if (lookahead == 'r') ADVANCE(1182);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 1699:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 1700:
      if (lookahead == 'n') ADVANCE(624);
      END_STATE();
    case 1701:
      if (lookahead == 'n') ADVANCE(653);
      END_STATE();
    case 1702:
      if (lookahead == 'n') ADVANCE(1132);
      END_STATE();
    case 1703:
      if (lookahead == 'n') ADVANCE(2536);
      END_STATE();
    case 1704:
      if (lookahead == 'n') ADVANCE(1460);
      END_STATE();
    case 1705:
      if (lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 1706:
      if (lookahead == 'n') ADVANCE(2424);
      END_STATE();
    case 1707:
      if (lookahead == 'n') ADVANCE(1511);
      if (lookahead == 'p') ADVANCE(2472);
      END_STATE();
    case 1708:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 1709:
      if (lookahead == 'n') ADVANCE(1514);
      END_STATE();
    case 1710:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 1711:
      if (lookahead == 'n') ADVANCE(1194);
      END_STATE();
    case 1712:
      if (lookahead == 'n') ADVANCE(2393);
      END_STATE();
    case 1713:
      if (lookahead == 'n') ADVANCE(1105);
      END_STATE();
    case 1714:
      if (lookahead == 'n') ADVANCE(1135);
      END_STATE();
    case 1715:
      if (lookahead == 'n') ADVANCE(1136);
      END_STATE();
    case 1716:
      if (lookahead == 'n') ADVANCE(2427);
      END_STATE();
    case 1717:
      if (lookahead == 'n') ADVANCE(1153);
      END_STATE();
    case 1718:
      if (lookahead == 'n') ADVANCE(2274);
      END_STATE();
    case 1719:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 1720:
      if (lookahead == 'n') ADVANCE(2428);
      END_STATE();
    case 1721:
      if (lookahead == 'n') ADVANCE(1159);
      END_STATE();
    case 1722:
      if (lookahead == 'n') ADVANCE(2277);
      END_STATE();
    case 1723:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 1724:
      if (lookahead == 'n') ADVANCE(1137);
      END_STATE();
    case 1725:
      if (lookahead == 'n') ADVANCE(2278);
      END_STATE();
    case 1726:
      if (lookahead == 'n') ADVANCE(2467);
      END_STATE();
    case 1727:
      if (lookahead == 'n') ADVANCE(1138);
      END_STATE();
    case 1728:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 1729:
      if (lookahead == 'n') ADVANCE(1139);
      END_STATE();
    case 1730:
      if (lookahead == 'n') ADVANCE(1140);
      END_STATE();
    case 1731:
      if (lookahead == 'n') ADVANCE(1141);
      END_STATE();
    case 1732:
      if (lookahead == 'n') ADVANCE(2281);
      END_STATE();
    case 1733:
      if (lookahead == 'n') ADVANCE(2282);
      END_STATE();
    case 1734:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 1735:
      if (lookahead == 'n') ADVANCE(1142);
      END_STATE();
    case 1736:
      if (lookahead == 'n') ADVANCE(2283);
      END_STATE();
    case 1737:
      if (lookahead == 'n') ADVANCE(1144);
      END_STATE();
    case 1738:
      if (lookahead == 'n') ADVANCE(1145);
      END_STATE();
    case 1739:
      if (lookahead == 'n') ADVANCE(1145);
      if (lookahead == 'o') ADVANCE(1463);
      END_STATE();
    case 1740:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 1741:
      if (lookahead == 'n') ADVANCE(1523);
      END_STATE();
    case 1742:
      if (lookahead == 'n') ADVANCE(2437);
      END_STATE();
    case 1743:
      if (lookahead == 'n') ADVANCE(2438);
      END_STATE();
    case 1744:
      if (lookahead == 'n') ADVANCE(1526);
      END_STATE();
    case 1745:
      if (lookahead == 'n') ADVANCE(1518);
      END_STATE();
    case 1746:
      if (lookahead == 'n') ADVANCE(2292);
      END_STATE();
    case 1747:
      if (lookahead == 'n') ADVANCE(2439);
      END_STATE();
    case 1748:
      if (lookahead == 'n') ADVANCE(2440);
      END_STATE();
    case 1749:
      if (lookahead == 'n') ADVANCE(1583);
      END_STATE();
    case 1750:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 1751:
      if (lookahead == 'n') ADVANCE(2444);
      END_STATE();
    case 1752:
      if (lookahead == 'n') ADVANCE(2446);
      END_STATE();
    case 1753:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 1754:
      if (lookahead == 'n') ADVANCE(2307);
      END_STATE();
    case 1755:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 1756:
      if (lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 1757:
      if (lookahead == 'n') ADVANCE(722);
      END_STATE();
    case 1758:
      if (lookahead == 'n') ADVANCE(723);
      END_STATE();
    case 1759:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 1760:
      if (lookahead == 'n') ADVANCE(776);
      END_STATE();
    case 1761:
      if (lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 1762:
      if (lookahead == 'n') ADVANCE(1447);
      END_STATE();
    case 1763:
      if (lookahead == 'n') ADVANCE(1998);
      END_STATE();
    case 1764:
      if (lookahead == 'n') ADVANCE(1863);
      END_STATE();
    case 1765:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 1766:
      if (lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 1767:
      if (lookahead == 'n') ADVANCE(1303);
      END_STATE();
    case 1768:
      if (lookahead == 'n') ADVANCE(887);
      END_STATE();
    case 1769:
      if (lookahead == 'n') ADVANCE(2481);
      END_STATE();
    case 1770:
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 1771:
      if (lookahead == 'n') ADVANCE(1916);
      END_STATE();
    case 1772:
      if (lookahead == 'n') ADVANCE(563);
      END_STATE();
    case 1773:
      if (lookahead == 'n') ADVANCE(1163);
      END_STATE();
    case 1774:
      if (lookahead == 'n') ADVANCE(2486);
      END_STATE();
    case 1775:
      if (lookahead == 'n') ADVANCE(1925);
      END_STATE();
    case 1776:
      if (lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 1777:
      if (lookahead == 'n') ADVANCE(2017);
      END_STATE();
    case 1778:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 1779:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 1780:
      if (lookahead == 'n') ADVANCE(1178);
      END_STATE();
    case 1781:
      if (lookahead == 'n') ADVANCE(2476);
      END_STATE();
    case 1782:
      if (lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 1783:
      if (lookahead == 'n') ADVANCE(1913);
      END_STATE();
    case 1784:
      if (lookahead == 'n') ADVANCE(864);
      END_STATE();
    case 1785:
      if (lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 1786:
      if (lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 1787:
      if (lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 1788:
      if (lookahead == 'n') ADVANCE(2609);
      if (lookahead == 'o') ADVANCE(1876);
      END_STATE();
    case 1789:
      if (lookahead == 'n') ADVANCE(426);
      if (lookahead == 's') ADVANCE(2921);
      END_STATE();
    case 1790:
      if (lookahead == 'n') ADVANCE(1461);
      if (lookahead == 'r') ADVANCE(1503);
      END_STATE();
    case 1791:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 1792:
      if (lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 1793:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 1794:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 1795:
      if (lookahead == 'n') ADVANCE(995);
      END_STATE();
    case 1796:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 1797:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 1798:
      if (lookahead == 'n') ADVANCE(1382);
      END_STATE();
    case 1799:
      if (lookahead == 'n') ADVANCE(991);
      END_STATE();
    case 1800:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 1801:
      if (lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 1802:
      if (lookahead == 'n') ADVANCE(982);
      END_STATE();
    case 1803:
      if (lookahead == 'n') ADVANCE(2400);
      END_STATE();
    case 1804:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 1805:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 1806:
      if (lookahead == 'n') ADVANCE(457);
      END_STATE();
    case 1807:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 1808:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 1809:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 1810:
      if (lookahead == 'n') ADVANCE(1354);
      END_STATE();
    case 1811:
      if (lookahead == 'n') ADVANCE(1366);
      END_STATE();
    case 1812:
      if (lookahead == 'n') ADVANCE(1958);
      END_STATE();
    case 1813:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 1814:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 1815:
      if (lookahead == 'n') ADVANCE(1028);
      END_STATE();
    case 1816:
      if (lookahead == 'n') ADVANCE(1966);
      END_STATE();
    case 1817:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 1818:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 1819:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 1820:
      if (lookahead == 'n') ADVANCE(1970);
      END_STATE();
    case 1821:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 1822:
      if (lookahead == 'n') ADVANCE(1206);
      END_STATE();
    case 1823:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 1824:
      if (lookahead == 'n') ADVANCE(1980);
      END_STATE();
    case 1825:
      if (lookahead == 'n') ADVANCE(1210);
      END_STATE();
    case 1826:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 1827:
      if (lookahead == 'o') ADVANCE(2682);
      END_STATE();
    case 1828:
      if (lookahead == 'o') ADVANCE(1707);
      if (lookahead == 's') ADVANCE(1260);
      END_STATE();
    case 1829:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 1830:
      if (lookahead == 'o') ADVANCE(2996);
      END_STATE();
    case 1831:
      if (lookahead == 'o') ADVANCE(3065);
      END_STATE();
    case 1832:
      if (lookahead == 'o') ADVANCE(3066);
      END_STATE();
    case 1833:
      if (lookahead == 'o') ADVANCE(3067);
      END_STATE();
    case 1834:
      if (lookahead == 'o') ADVANCE(2853);
      END_STATE();
    case 1835:
      if (lookahead == 'o') ADVANCE(3018);
      END_STATE();
    case 1836:
      if (lookahead == 'o') ADVANCE(3019);
      END_STATE();
    case 1837:
      if (lookahead == 'o') ADVANCE(3068);
      END_STATE();
    case 1838:
      if (lookahead == 'o') ADVANCE(2997);
      END_STATE();
    case 1839:
      if (lookahead == 'o') ADVANCE(3069);
      END_STATE();
    case 1840:
      if (lookahead == 'o') ADVANCE(3070);
      END_STATE();
    case 1841:
      if (lookahead == 'o') ADVANCE(3086);
      END_STATE();
    case 1842:
      if (lookahead == 'o') ADVANCE(682);
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 1843:
      if (lookahead == 'o') ADVANCE(2987);
      END_STATE();
    case 1844:
      if (lookahead == 'o') ADVANCE(3045);
      END_STATE();
    case 1845:
      if (lookahead == 'o') ADVANCE(2975);
      END_STATE();
    case 1846:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 1847:
      if (lookahead == 'o') ADVANCE(2674);
      END_STATE();
    case 1848:
      if (lookahead == 'o') ADVANCE(1739);
      END_STATE();
    case 1849:
      if (lookahead == 'o') ADVANCE(2693);
      END_STATE();
    case 1850:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 1851:
      if (lookahead == 'o') ADVANCE(2672);
      END_STATE();
    case 1852:
      if (lookahead == 'o') ADVANCE(1627);
      END_STATE();
    case 1853:
      if (lookahead == 'o') ADVANCE(1621);
      END_STATE();
    case 1854:
      if (lookahead == 'o') ADVANCE(1467);
      END_STATE();
    case 1855:
      if (lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 1856:
      if (lookahead == 'o') ADVANCE(2685);
      END_STATE();
    case 1857:
      if (lookahead == 'o') ADVANCE(2593);
      END_STATE();
    case 1858:
      if (lookahead == 'o') ADVANCE(2074);
      END_STATE();
    case 1859:
      if (lookahead == 'o') ADVANCE(2688);
      END_STATE();
    case 1860:
      if (lookahead == 'o') ADVANCE(2320);
      END_STATE();
    case 1861:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 1862:
      if (lookahead == 'o') ADVANCE(1665);
      END_STATE();
    case 1863:
      if (lookahead == 'o') ADVANCE(2176);
      END_STATE();
    case 1864:
      if (lookahead == 'o') ADVANCE(1709);
      END_STATE();
    case 1865:
      if (lookahead == 'o') ADVANCE(2510);
      END_STATE();
    case 1866:
      if (lookahead == 'o') ADVANCE(1528);
      END_STATE();
    case 1867:
      if (lookahead == 'o') ADVANCE(2104);
      END_STATE();
    case 1868:
      if (lookahead == 'o') ADVANCE(1616);
      END_STATE();
    case 1869:
      if (lookahead == 'o') ADVANCE(1722);
      END_STATE();
    case 1870:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 1871:
      if (lookahead == 'o') ADVANCE(1683);
      END_STATE();
    case 1872:
      if (lookahead == 'o') ADVANCE(552);
      END_STATE();
    case 1873:
      if (lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 1874:
      if (lookahead == 'o') ADVANCE(2274);
      END_STATE();
    case 1875:
      if (lookahead == 'o') ADVANCE(1684);
      END_STATE();
    case 1876:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 1877:
      if (lookahead == 'o') ADVANCE(1685);
      END_STATE();
    case 1878:
      if (lookahead == 'o') ADVANCE(2111);
      END_STATE();
    case 1879:
      if (lookahead == 'o') ADVANCE(1686);
      END_STATE();
    case 1880:
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 1881:
      if (lookahead == 'o') ADVANCE(1687);
      END_STATE();
    case 1882:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 1883:
      if (lookahead == 'o') ADVANCE(1713);
      END_STATE();
    case 1884:
      if (lookahead == 'o') ADVANCE(2078);
      END_STATE();
    case 1885:
      if (lookahead == 'o') ADVANCE(1689);
      END_STATE();
    case 1886:
      if (lookahead == 'o') ADVANCE(1142);
      END_STATE();
    case 1887:
      if (lookahead == 'o') ADVANCE(1691);
      END_STATE();
    case 1888:
      if (lookahead == 'o') ADVANCE(2105);
      END_STATE();
    case 1889:
      if (lookahead == 'o') ADVANCE(1692);
      END_STATE();
    case 1890:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 1891:
      if (lookahead == 'o') ADVANCE(1693);
      END_STATE();
    case 1892:
      if (lookahead == 'o') ADVANCE(2116);
      END_STATE();
    case 1893:
      if (lookahead == 'o') ADVANCE(2293);
      END_STATE();
    case 1894:
      if (lookahead == 'o') ADVANCE(2295);
      END_STATE();
    case 1895:
      if (lookahead == 'o') ADVANCE(2174);
      END_STATE();
    case 1896:
      if (lookahead == 'o') ADVANCE(2307);
      END_STATE();
    case 1897:
      if (lookahead == 'o') ADVANCE(2128);
      END_STATE();
    case 1898:
      if (lookahead == 'o') ADVANCE(2085);
      END_STATE();
    case 1899:
      if (lookahead == 'o') ADVANCE(2086);
      END_STATE();
    case 1900:
      if (lookahead == 'o') ADVANCE(2134);
      END_STATE();
    case 1901:
      if (lookahead == 'o') ADVANCE(2089);
      END_STATE();
    case 1902:
      if (lookahead == 'o') ADVANCE(2114);
      if (lookahead == 's') ADVANCE(2526);
      END_STATE();
    case 1903:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 1904:
      if (lookahead == 'o') ADVANCE(2092);
      END_STATE();
    case 1905:
      if (lookahead == 'o') ADVANCE(2142);
      END_STATE();
    case 1906:
      if (lookahead == 'o') ADVANCE(1095);
      END_STATE();
    case 1907:
      if (lookahead == 'o') ADVANCE(2673);
      END_STATE();
    case 1908:
      if (lookahead == 'o') ADVANCE(2584);
      END_STATE();
    case 1909:
      if (lookahead == 'o') ADVANCE(2675);
      END_STATE();
    case 1910:
      if (lookahead == 'o') ADVANCE(1630);
      if (lookahead == 'r') ADVANCE(1960);
      END_STATE();
    case 1911:
      if (lookahead == 'o') ADVANCE(1525);
      END_STATE();
    case 1912:
      if (lookahead == 'o') ADVANCE(1710);
      END_STATE();
    case 1913:
      if (lookahead == 'o') ADVANCE(2198);
      END_STATE();
    case 1914:
      if (lookahead == 'o') ADVANCE(1741);
      END_STATE();
    case 1915:
      if (lookahead == 'o') ADVANCE(1725);
      END_STATE();
    case 1916:
      if (lookahead == 'o') ADVANCE(2677);
      END_STATE();
    case 1917:
      if (lookahead == 'o') ADVANCE(2676);
      END_STATE();
    case 1918:
      if (lookahead == 'o') ADVANCE(1168);
      END_STATE();
    case 1919:
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == 'p') ADVANCE(530);
      END_STATE();
    case 1920:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 1921:
      if (lookahead == 'o') ADVANCE(1638);
      END_STATE();
    case 1922:
      if (lookahead == 'o') ADVANCE(1744);
      END_STATE();
    case 1923:
      if (lookahead == 'o') ADVANCE(2138);
      END_STATE();
    case 1924:
      if (lookahead == 'o') ADVANCE(1732);
      END_STATE();
    case 1925:
      if (lookahead == 'o') ADVANCE(2678);
      END_STATE();
    case 1926:
      if (lookahead == 'o') ADVANCE(2588);
      END_STATE();
    case 1927:
      if (lookahead == 'o') ADVANCE(2687);
      END_STATE();
    case 1928:
      if (lookahead == 'o') ADVANCE(1793);
      END_STATE();
    case 1929:
      if (lookahead == 'o') ADVANCE(1204);
      END_STATE();
    case 1930:
      if (lookahead == 'o') ADVANCE(1531);
      END_STATE();
    case 1931:
      if (lookahead == 'o') ADVANCE(1745);
      END_STATE();
    case 1932:
      if (lookahead == 'o') ADVANCE(1733);
      END_STATE();
    case 1933:
      if (lookahead == 'o') ADVANCE(2504);
      END_STATE();
    case 1934:
      if (lookahead == 'o') ADVANCE(2474);
      END_STATE();
    case 1935:
      if (lookahead == 'o') ADVANCE(1796);
      END_STATE();
    case 1936:
      if (lookahead == 'o') ADVANCE(1176);
      END_STATE();
    case 1937:
      if (lookahead == 'o') ADVANCE(1718);
      END_STATE();
    case 1938:
      if (lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 1939:
      if (lookahead == 'o') ADVANCE(2350);
      END_STATE();
    case 1940:
      if (lookahead == 'o') ADVANCE(1757);
      END_STATE();
    case 1941:
      if (lookahead == 'o') ADVANCE(1736);
      END_STATE();
    case 1942:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 1943:
      if (lookahead == 'o') ADVANCE(2681);
      END_STATE();
    case 1944:
      if (lookahead == 'o') ADVANCE(1758);
      END_STATE();
    case 1945:
      if (lookahead == 'o') ADVANCE(1746);
      END_STATE();
    case 1946:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 1947:
      if (lookahead == 'o') ADVANCE(1818);
      END_STATE();
    case 1948:
      if (lookahead == 'o') ADVANCE(1759);
      END_STATE();
    case 1949:
      if (lookahead == 'o') ADVANCE(1754);
      END_STATE();
    case 1950:
      if (lookahead == 'o') ADVANCE(1760);
      END_STATE();
    case 1951:
      if (lookahead == 'o') ADVANCE(2494);
      END_STATE();
    case 1952:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 1953:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 1954:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 1955:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 1956:
      if (lookahead == 'o') ADVANCE(1738);
      END_STATE();
    case 1957:
      if (lookahead == 'o') ADVANCE(2506);
      END_STATE();
    case 1958:
      if (lookahead == 'o') ADVANCE(2515);
      END_STATE();
    case 1959:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 1960:
      if (lookahead == 'o') ADVANCE(2374);
      END_STATE();
    case 1961:
      if (lookahead == 'o') ADVANCE(2185);
      END_STATE();
    case 1962:
      if (lookahead == 'o') ADVANCE(2545);
      END_STATE();
    case 1963:
      if (lookahead == 'o') ADVANCE(2237);
      END_STATE();
    case 1964:
      if (lookahead == 'o') ADVANCE(2690);
      END_STATE();
    case 1965:
      if (lookahead == 'o') ADVANCE(1673);
      END_STATE();
    case 1966:
      if (lookahead == 'o') ADVANCE(2561);
      END_STATE();
    case 1967:
      if (lookahead == 'o') ADVANCE(2549);
      END_STATE();
    case 1968:
      if (lookahead == 'o') ADVANCE(2053);
      END_STATE();
    case 1969:
      if (lookahead == 'o') ADVANCE(1808);
      END_STATE();
    case 1970:
      if (lookahead == 'o') ADVANCE(2553);
      END_STATE();
    case 1971:
      if (lookahead == 'o') ADVANCE(1809);
      END_STATE();
    case 1972:
      if (lookahead == 'o') ADVANCE(1671);
      END_STATE();
    case 1973:
      if (lookahead == 'o') ADVANCE(1675);
      END_STATE();
    case 1974:
      if (lookahead == 'o') ADVANCE(1600);
      END_STATE();
    case 1975:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 1976:
      if (lookahead == 'o') ADVANCE(1676);
      END_STATE();
    case 1977:
      if (lookahead == 'o') ADVANCE(1603);
      END_STATE();
    case 1978:
      if (lookahead == 'o') ADVANCE(2636);
      END_STATE();
    case 1979:
      if (lookahead == 'o') ADVANCE(2417);
      END_STATE();
    case 1980:
      if (lookahead == 'o') ADVANCE(1823);
      END_STATE();
    case 1981:
      if (lookahead == 'o') ADVANCE(2419);
      END_STATE();
    case 1982:
      if (lookahead == 'p') ADVANCE(1229);
      END_STATE();
    case 1983:
      if (lookahead == 'p') ADVANCE(303);
      END_STATE();
    case 1984:
      if (lookahead == 'p') ADVANCE(288);
      END_STATE();
    case 1985:
      if (lookahead == 'p') ADVANCE(2998);
      END_STATE();
    case 1986:
      if (lookahead == 'p') ADVANCE(3014);
      END_STATE();
    case 1987:
      if (lookahead == 'p') ADVANCE(2877);
      END_STATE();
    case 1988:
      if (lookahead == 'p') ADVANCE(3000);
      END_STATE();
    case 1989:
      if (lookahead == 'p') ADVANCE(2865);
      END_STATE();
    case 1990:
      if (lookahead == 'p') ADVANCE(3045);
      END_STATE();
    case 1991:
      if (lookahead == 'p') ADVANCE(2776);
      END_STATE();
    case 1992:
      if (lookahead == 'p') ADVANCE(2980);
      END_STATE();
    case 1993:
      if (lookahead == 'p') ADVANCE(3024);
      END_STATE();
    case 1994:
      if (lookahead == 'p') ADVANCE(2975);
      END_STATE();
    case 1995:
      if (lookahead == 'p') ADVANCE(274);
      END_STATE();
    case 1996:
      if (lookahead == 'p') ADVANCE(1221);
      END_STATE();
    case 1997:
      if (lookahead == 'p') ADVANCE(1131);
      END_STATE();
    case 1998:
      if (lookahead == 'p') ADVANCE(1151);
      END_STATE();
    case 1999:
      if (lookahead == 'p') ADVANCE(1329);
      END_STATE();
    case 2000:
      if (lookahead == 'p') ADVANCE(511);
      END_STATE();
    case 2001:
      if (lookahead == 'p') ADVANCE(2272);
      END_STATE();
    case 2002:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 2003:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 2004:
      if (lookahead == 'p') ADVANCE(2200);
      END_STATE();
    case 2005:
      if (lookahead == 'p') ADVANCE(1143);
      END_STATE();
    case 2006:
      if (lookahead == 'p') ADVANCE(2458);
      END_STATE();
    case 2007:
      if (lookahead == 'p') ADVANCE(464);
      END_STATE();
    case 2008:
      if (lookahead == 'p') ADVANCE(825);
      END_STATE();
    case 2009:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 2010:
      if (lookahead == 'p') ADVANCE(919);
      END_STATE();
    case 2011:
      if (lookahead == 'p') ADVANCE(816);
      END_STATE();
    case 2012:
      if (lookahead == 'p') ADVANCE(962);
      END_STATE();
    case 2013:
      if (lookahead == 'p') ADVANCE(790);
      if (lookahead == 'u') ADVANCE(2456);
      if (lookahead == 'v') ADVANCE(794);
      END_STATE();
    case 2014:
      if (lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 2015:
      if (lookahead == 'p') ADVANCE(2583);
      END_STATE();
    case 2016:
      if (lookahead == 'p') ADVANCE(2113);
      END_STATE();
    case 2017:
      if (lookahead == 'p') ADVANCE(1157);
      END_STATE();
    case 2018:
      if (lookahead == 'p') ADVANCE(2207);
      END_STATE();
    case 2019:
      if (lookahead == 'p') ADVANCE(2591);
      END_STATE();
    case 2020:
      if (lookahead == 'p') ADVANCE(1328);
      END_STATE();
    case 2021:
      if (lookahead == 'p') ADVANCE(1961);
      END_STATE();
    case 2022:
      if (lookahead == 'p') ADVANCE(1530);
      END_STATE();
    case 2023:
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead == 'u') ADVANCE(2023);
      END_STATE();
    case 2024:
      if (lookahead == 'p') ADVANCE(1300);
      END_STATE();
    case 2025:
      if (lookahead == 'p') ADVANCE(869);
      END_STATE();
    case 2026:
      if (lookahead == 'p') ADVANCE(1547);
      END_STATE();
    case 2027:
      if (lookahead == 'p') ADVANCE(2144);
      END_STATE();
    case 2028:
      if (lookahead == 'p') ADVANCE(2492);
      END_STATE();
    case 2029:
      if (lookahead == 'p') ADVANCE(1892);
      END_STATE();
    case 2030:
      if (lookahead == 'p') ADVANCE(2155);
      END_STATE();
    case 2031:
      if (lookahead == 'p') ADVANCE(850);
      END_STATE();
    case 2032:
      if (lookahead == 'p') ADVANCE(1897);
      END_STATE();
    case 2033:
      if (lookahead == 'p') ADVANCE(2490);
      END_STATE();
    case 2034:
      if (lookahead == 'p') ADVANCE(1900);
      END_STATE();
    case 2035:
      if (lookahead == 'p') ADVANCE(2158);
      END_STATE();
    case 2036:
      if (lookahead == 'p') ADVANCE(896);
      END_STATE();
    case 2037:
      if (lookahead == 'p') ADVANCE(1233);
      END_STATE();
    case 2038:
      if (lookahead == 'p') ADVANCE(1361);
      END_STATE();
    case 2039:
      if (lookahead == 'p') ADVANCE(1930);
      END_STATE();
    case 2040:
      if (lookahead == 'p') ADVANCE(2236);
      END_STATE();
    case 2041:
      if (lookahead == 'p') ADVANCE(986);
      END_STATE();
    case 2042:
      if (lookahead == 'p') ADVANCE(2537);
      END_STATE();
    case 2043:
      if (lookahead == 'p') ADVANCE(1339);
      END_STATE();
    case 2044:
      if (lookahead == 'p') ADVANCE(2542);
      END_STATE();
    case 2045:
      if (lookahead == 'p') ADVANCE(1364);
      END_STATE();
    case 2046:
      if (lookahead == 'p') ADVANCE(2213);
      END_STATE();
    case 2047:
      if (lookahead == 'p') ADVANCE(2546);
      END_STATE();
    case 2048:
      if (lookahead == 'p') ADVANCE(1349);
      END_STATE();
    case 2049:
      if (lookahead == 'p') ADVANCE(2548);
      END_STATE();
    case 2050:
      if (lookahead == 'p') ADVANCE(1370);
      END_STATE();
    case 2051:
      if (lookahead == 'p') ADVANCE(1352);
      END_STATE();
    case 2052:
      if (lookahead == 'p') ADVANCE(1372);
      END_STATE();
    case 2053:
      if (lookahead == 'p') ADVANCE(2554);
      END_STATE();
    case 2054:
      if (lookahead == 'p') ADVANCE(1356);
      END_STATE();
    case 2055:
      if (lookahead == 'p') ADVANCE(1373);
      END_STATE();
    case 2056:
      if (lookahead == 'p') ADVANCE(1360);
      END_STATE();
    case 2057:
      if (lookahead == 'p') ADVANCE(1367);
      END_STATE();
    case 2058:
      if (lookahead == 'p') ADVANCE(2217);
      END_STATE();
    case 2059:
      if (lookahead == 'p') ADVANCE(2240);
      END_STATE();
    case 2060:
      if (lookahead == 'p') ADVANCE(1596);
      END_STATE();
    case 2061:
      if (lookahead == 'p') ADVANCE(2250);
      END_STATE();
    case 2062:
      if (lookahead == 'p') ADVANCE(2255);
      END_STATE();
    case 2063:
      if (lookahead == 'p') ADVANCE(1052);
      END_STATE();
    case 2064:
      if (lookahead == 'p') ADVANCE(2253);
      END_STATE();
    case 2065:
      if (lookahead == 'p') ADVANCE(2257);
      END_STATE();
    case 2066:
      if (lookahead == 'p') ADVANCE(1236);
      END_STATE();
    case 2067:
      if (lookahead == 'p') ADVANCE(1064);
      END_STATE();
    case 2068:
      if (lookahead == 'p') ADVANCE(1237);
      END_STATE();
    case 2069:
      if (lookahead == 'p') ADVANCE(1238);
      END_STATE();
    case 2070:
      if (lookahead == 'q') ADVANCE(2775);
      END_STATE();
    case 2071:
      if (lookahead == 'q') ADVANCE(2606);
      END_STATE();
    case 2072:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 2073:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 2074:
      if (lookahead == 'r') ADVANCE(2858);
      END_STATE();
    case 2075:
      if (lookahead == 'r') ADVANCE(2973);
      END_STATE();
    case 2076:
      if (lookahead == 'r') ADVANCE(2960);
      END_STATE();
    case 2077:
      if (lookahead == 'r') ADVANCE(3002);
      END_STATE();
    case 2078:
      if (lookahead == 'r') ADVANCE(2859);
      END_STATE();
    case 2079:
      if (lookahead == 'r') ADVANCE(2983);
      END_STATE();
    case 2080:
      if (lookahead == 'r') ADVANCE(3001);
      END_STATE();
    case 2081:
      if (lookahead == 'r') ADVANCE(2841);
      END_STATE();
    case 2082:
      if (lookahead == 'r') ADVANCE(2939);
      END_STATE();
    case 2083:
      if (lookahead == 'r') ADVANCE(2977);
      END_STATE();
    case 2084:
      if (lookahead == 'r') ADVANCE(2837);
      END_STATE();
    case 2085:
      if (lookahead == 'r') ADVANCE(2910);
      END_STATE();
    case 2086:
      if (lookahead == 'r') ADVANCE(2911);
      END_STATE();
    case 2087:
      if (lookahead == 'r') ADVANCE(2971);
      END_STATE();
    case 2088:
      if (lookahead == 'r') ADVANCE(2890);
      END_STATE();
    case 2089:
      if (lookahead == 'r') ADVANCE(2842);
      END_STATE();
    case 2090:
      if (lookahead == 'r') ADVANCE(3045);
      END_STATE();
    case 2091:
      if (lookahead == 'r') ADVANCE(2979);
      END_STATE();
    case 2092:
      if (lookahead == 'r') ADVANCE(3076);
      END_STATE();
    case 2093:
      if (lookahead == 'r') ADVANCE(3078);
      END_STATE();
    case 2094:
      if (lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 2095:
      if (lookahead == 'r') ADVANCE(2728);
      END_STATE();
    case 2096:
      if (lookahead == 'r') ADVANCE(2315);
      END_STATE();
    case 2097:
      if (lookahead == 'r') ADVANCE(2657);
      END_STATE();
    case 2098:
      if (lookahead == 'r') ADVANCE(2460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 2099:
      if (lookahead == 'r') ADVANCE(1184);
      END_STATE();
    case 2100:
      if (lookahead == 'r') ADVANCE(2422);
      END_STATE();
    case 2101:
      if (lookahead == 'r') ADVANCE(1330);
      END_STATE();
    case 2102:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 2103:
      if (lookahead == 'r') ADVANCE(1629);
      END_STATE();
    case 2104:
      if (lookahead == 'r') ADVANCE(1375);
      END_STATE();
    case 2105:
      if (lookahead == 'r') ADVANCE(1647);
      END_STATE();
    case 2106:
      if (lookahead == 'r') ADVANCE(2616);
      END_STATE();
    case 2107:
      if (lookahead == 'r') ADVANCE(2101);
      END_STATE();
    case 2108:
      if (lookahead == 'r') ADVANCE(2633);
      END_STATE();
    case 2109:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 2110:
      if (lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 2111:
      if (lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 2112:
      if (lookahead == 'r') ADVANCE(2426);
      END_STATE();
    case 2113:
      if (lookahead == 'r') ADVANCE(1918);
      END_STATE();
    case 2114:
      if (lookahead == 'r') ADVANCE(2723);
      END_STATE();
    case 2115:
      if (lookahead == 'r') ADVANCE(2577);
      END_STATE();
    case 2116:
      if (lookahead == 'r') ADVANCE(2425);
      END_STATE();
    case 2117:
      if (lookahead == 'r') ADVANCE(1305);
      END_STATE();
    case 2118:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 2119:
      if (lookahead == 'r') ADVANCE(1810);
      END_STATE();
    case 2120:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 2121:
      if (lookahead == 'r') ADVANCE(2434);
      END_STATE();
    case 2122:
      if (lookahead == 'r') ADVANCE(1493);
      END_STATE();
    case 2123:
      if (lookahead == 'r') ADVANCE(1247);
      END_STATE();
    case 2124:
      if (lookahead == 'r') ADVANCE(861);
      END_STATE();
    case 2125:
      if (lookahead == 'r') ADVANCE(1494);
      END_STATE();
    case 2126:
      if (lookahead == 'r') ADVANCE(1495);
      END_STATE();
    case 2127:
      if (lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 2128:
      if (lookahead == 'r') ADVANCE(2435);
      END_STATE();
    case 2129:
      if (lookahead == 'r') ADVANCE(1497);
      END_STATE();
    case 2130:
      if (lookahead == 'r') ADVANCE(1268);
      END_STATE();
    case 2131:
      if (lookahead == 'r') ADVANCE(1365);
      END_STATE();
    case 2132:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 2133:
      if (lookahead == 'r') ADVANCE(1500);
      END_STATE();
    case 2134:
      if (lookahead == 'r') ADVANCE(2442);
      END_STATE();
    case 2135:
      if (lookahead == 'r') ADVANCE(1542);
      END_STATE();
    case 2136:
      if (lookahead == 'r') ADVANCE(1868);
      END_STATE();
    case 2137:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 2138:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 2139:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 2140:
      if (lookahead == 'r') ADVANCE(2448);
      END_STATE();
    case 2141:
      if (lookahead == 'r') ADVANCE(811);
      END_STATE();
    case 2142:
      if (lookahead == 'r') ADVANCE(2451);
      END_STATE();
    case 2143:
      if (lookahead == 'r') ADVANCE(2452);
      END_STATE();
    case 2144:
      if (lookahead == 'r') ADVANCE(1886);
      END_STATE();
    case 2145:
      if (lookahead == 'r') ADVANCE(1859);
      END_STATE();
    case 2146:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 2147:
      if (lookahead == 'r') ADVANCE(750);
      END_STATE();
    case 2148:
      if (lookahead == 'r') ADVANCE(945);
      END_STATE();
    case 2149:
      if (lookahead == 'r') ADVANCE(758);
      END_STATE();
    case 2150:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 2151:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 2152:
      if (lookahead == 'r') ADVANCE(760);
      END_STATE();
    case 2153:
      if (lookahead == 'r') ADVANCE(763);
      END_STATE();
    case 2154:
      if (lookahead == 'r') ADVANCE(792);
      END_STATE();
    case 2155:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 2156:
      if (lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 2157:
      if (lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 2158:
      if (lookahead == 'r') ADVANCE(838);
      END_STATE();
    case 2159:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 2160:
      if (lookahead == 'r') ADVANCE(2018);
      END_STATE();
    case 2161:
      if (lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 2162:
      if (lookahead == 'r') ADVANCE(1921);
      END_STATE();
    case 2163:
      if (lookahead == 'r') ADVANCE(1398);
      END_STATE();
    case 2164:
      if (lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 2165:
      if (lookahead == 'r') ADVANCE(1917);
      END_STATE();
    case 2166:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 2167:
      if (lookahead == 'r') ADVANCE(854);
      END_STATE();
    case 2168:
      if (lookahead == 'r') ADVANCE(1293);
      END_STATE();
    case 2169:
      if (lookahead == 'r') ADVANCE(2749);
      END_STATE();
    case 2170:
      if (lookahead == 'r') ADVANCE(2330);
      END_STATE();
    case 2171:
      if (lookahead == 'r') ADVANCE(2186);
      END_STATE();
    case 2172:
      if (lookahead == 'r') ADVANCE(2331);
      END_STATE();
    case 2173:
      if (lookahead == 'r') ADVANCE(2327);
      END_STATE();
    case 2174:
      if (lookahead == 'r') ADVANCE(1662);
      END_STATE();
    case 2175:
      if (lookahead == 'r') ADVANCE(1278);
      END_STATE();
    case 2176:
      if (lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 2177:
      if (lookahead == 'r') ADVANCE(2738);
      END_STATE();
    case 2178:
      if (lookahead == 'r') ADVANCE(2372);
      END_STATE();
    case 2179:
      if (lookahead == 'r') ADVANCE(2370);
      END_STATE();
    case 2180:
      if (lookahead == 'r') ADVANCE(853);
      END_STATE();
    case 2181:
      if (lookahead == 'r') ADVANCE(2518);
      END_STATE();
    case 2182:
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 2183:
      if (lookahead == 'r') ADVANCE(2482);
      END_STATE();
    case 2184:
      if (lookahead == 'r') ADVANCE(2742);
      END_STATE();
    case 2185:
      if (lookahead == 'r') ADVANCE(2483);
      END_STATE();
    case 2186:
      if (lookahead == 'r') ADVANCE(1898);
      END_STATE();
    case 2187:
      if (lookahead == 'r') ADVANCE(1899);
      END_STATE();
    case 2188:
      if (lookahead == 'r') ADVANCE(2495);
      END_STATE();
    case 2189:
      if (lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 2190:
      if (lookahead == 'r') ADVANCE(1901);
      END_STATE();
    case 2191:
      if (lookahead == 'r') ADVANCE(2538);
      END_STATE();
    case 2192:
      if (lookahead == 'r') ADVANCE(1904);
      END_STATE();
    case 2193:
      if (lookahead == 'r') ADVANCE(2496);
      END_STATE();
    case 2194:
      if (lookahead == 'r') ADVANCE(2541);
      END_STATE();
    case 2195:
      if (lookahead == 'r') ADVANCE(2562);
      END_STATE();
    case 2196:
      if (lookahead == 'r') ADVANCE(2659);
      END_STATE();
    case 2197:
      if (lookahead == 'r') ADVANCE(1926);
      END_STATE();
    case 2198:
      if (lookahead == 'r') ADVANCE(1023);
      END_STATE();
    case 2199:
      if (lookahead == 'r') ADVANCE(1192);
      END_STATE();
    case 2200:
      if (lookahead == 'r') ADVANCE(928);
      END_STATE();
    case 2201:
      if (lookahead == 'r') ADVANCE(2619);
      END_STATE();
    case 2202:
      if (lookahead == 'r') ADVANCE(1929);
      END_STATE();
    case 2203:
      if (lookahead == 'r') ADVANCE(984);
      END_STATE();
    case 2204:
      if (lookahead == 'r') ADVANCE(958);
      END_STATE();
    case 2205:
      if (lookahead == 'r') ADVANCE(2540);
      END_STATE();
    case 2206:
      if (lookahead == 'r') ADVANCE(2187);
      END_STATE();
    case 2207:
      if (lookahead == 'r') ADVANCE(1345);
      END_STATE();
    case 2208:
      if (lookahead == 'r') ADVANCE(1319);
      END_STATE();
    case 2209:
      if (lookahead == 'r') ADVANCE(1193);
      END_STATE();
    case 2210:
      if (lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 2211:
      if (lookahead == 'r') ADVANCE(2621);
      END_STATE();
    case 2212:
      if (lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 2213:
      if (lookahead == 'r') ADVANCE(1936);
      END_STATE();
    case 2214:
      if (lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 2215:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 2216:
      if (lookahead == 'r') ADVANCE(2190);
      END_STATE();
    case 2217:
      if (lookahead == 'r') ADVANCE(1362);
      END_STATE();
    case 2218:
      if (lookahead == 'r') ADVANCE(2662);
      END_STATE();
    case 2219:
      if (lookahead == 'r') ADVANCE(2623);
      END_STATE();
    case 2220:
      if (lookahead == 'r') ADVANCE(1004);
      END_STATE();
    case 2221:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 2222:
      if (lookahead == 'r') ADVANCE(2192);
      END_STATE();
    case 2223:
      if (lookahead == 'r') ADVANCE(1332);
      END_STATE();
    case 2224:
      if (lookahead == 'r') ADVANCE(2624);
      END_STATE();
    case 2225:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 2226:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 2227:
      if (lookahead == 'r') ADVANCE(2664);
      END_STATE();
    case 2228:
      if (lookahead == 'r') ADVANCE(1341);
      END_STATE();
    case 2229:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 2230:
      if (lookahead == 'r') ADVANCE(1346);
      END_STATE();
    case 2231:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 2232:
      if (lookahead == 'r') ADVANCE(1350);
      END_STATE();
    case 2233:
      if (lookahead == 'r') ADVANCE(1358);
      END_STATE();
    case 2234:
      if (lookahead == 'r') ADVANCE(1371);
      if (lookahead == 's') ADVANCE(1046);
      END_STATE();
    case 2235:
      if (lookahead == 'r') ADVANCE(1658);
      END_STATE();
    case 2236:
      if (lookahead == 'r') ADVANCE(1002);
      END_STATE();
    case 2237:
      if (lookahead == 'r') ADVANCE(1385);
      END_STATE();
    case 2238:
      if (lookahead == 'r') ADVANCE(1811);
      END_STATE();
    case 2239:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 2240:
      if (lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 2241:
      if (lookahead == 'r') ADVANCE(1399);
      END_STATE();
    case 2242:
      if (lookahead == 'r') ADVANCE(1964);
      END_STATE();
    case 2243:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 2244:
      if (lookahead == 'r') ADVANCE(2560);
      END_STATE();
    case 2245:
      if (lookahead == 'r') ADVANCE(1201);
      END_STATE();
    case 2246:
      if (lookahead == 'r') ADVANCE(2668);
      END_STATE();
    case 2247:
      if (lookahead == 'r') ADVANCE(1006);
      END_STATE();
    case 2248:
      if (lookahead == 'r') ADVANCE(1393);
      END_STATE();
    case 2249:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 2250:
      if (lookahead == 'r') ADVANCE(1030);
      END_STATE();
    case 2251:
      if (lookahead == 'r') ADVANCE(2564);
      END_STATE();
    case 2252:
      if (lookahead == 'r') ADVANCE(2669);
      END_STATE();
    case 2253:
      if (lookahead == 'r') ADVANCE(1011);
      END_STATE();
    case 2254:
      if (lookahead == 'r') ADVANCE(1039);
      END_STATE();
    case 2255:
      if (lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 2256:
      if (lookahead == 'r') ADVANCE(2670);
      END_STATE();
    case 2257:
      if (lookahead == 'r') ADVANCE(1014);
      END_STATE();
    case 2258:
      if (lookahead == 'r') ADVANCE(1043);
      END_STATE();
    case 2259:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 2260:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 2261:
      if (lookahead == 'r') ADVANCE(2758);
      END_STATE();
    case 2262:
      if (lookahead == 'r') ADVANCE(1672);
      END_STATE();
    case 2263:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 2264:
      if (lookahead == 'r') ADVANCE(2058);
      END_STATE();
    case 2265:
      if (lookahead == 'r') ADVANCE(1965);
      END_STATE();
    case 2266:
      if (lookahead == 'r') ADVANCE(2762);
      END_STATE();
    case 2267:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 2268:
      if (lookahead == 'r') ADVANCE(1423);
      END_STATE();
    case 2269:
      if (lookahead == 'r') ADVANCE(1981);
      END_STATE();
    case 2270:
      if (lookahead == 's') ADVANCE(3014);
      END_STATE();
    case 2271:
      if (lookahead == 's') ADVANCE(3012);
      END_STATE();
    case 2272:
      if (lookahead == 's') ADVANCE(2854);
      END_STATE();
    case 2273:
      if (lookahead == 's') ADVANCE(2879);
      END_STATE();
    case 2274:
      if (lookahead == 's') ADVANCE(2938);
      END_STATE();
    case 2275:
      if (lookahead == 's') ADVANCE(2892);
      END_STATE();
    case 2276:
      if (lookahead == 's') ADVANCE(2822);
      END_STATE();
    case 2277:
      if (lookahead == 's') ADVANCE(2860);
      END_STATE();
    case 2278:
      if (lookahead == 's') ADVANCE(2934);
      END_STATE();
    case 2279:
      if (lookahead == 's') ADVANCE(2899);
      END_STATE();
    case 2280:
      if (lookahead == 's') ADVANCE(2962);
      END_STATE();
    case 2281:
      if (lookahead == 's') ADVANCE(3013);
      END_STATE();
    case 2282:
      if (lookahead == 's') ADVANCE(3011);
      END_STATE();
    case 2283:
      if (lookahead == 's') ADVANCE(2937);
      END_STATE();
    case 2284:
      if (lookahead == 's') ADVANCE(2920);
      END_STATE();
    case 2285:
      if (lookahead == 's') ADVANCE(2900);
      END_STATE();
    case 2286:
      if (lookahead == 's') ADVANCE(2963);
      END_STATE();
    case 2287:
      if (lookahead == 's') ADVANCE(2855);
      END_STATE();
    case 2288:
      if (lookahead == 's') ADVANCE(2889);
      END_STATE();
    case 2289:
      if (lookahead == 's') ADVANCE(2902);
      END_STATE();
    case 2290:
      if (lookahead == 's') ADVANCE(2824);
      END_STATE();
    case 2291:
      if (lookahead == 's') ADVANCE(2903);
      END_STATE();
    case 2292:
      if (lookahead == 's') ADVANCE(2932);
      END_STATE();
    case 2293:
      if (lookahead == 's') ADVANCE(2912);
      END_STATE();
    case 2294:
      if (lookahead == 's') ADVANCE(2856);
      END_STATE();
    case 2295:
      if (lookahead == 's') ADVANCE(2913);
      END_STATE();
    case 2296:
      if (lookahead == 's') ADVANCE(2991);
      END_STATE();
    case 2297:
      if (lookahead == 's') ADVANCE(2825);
      END_STATE();
    case 2298:
      if (lookahead == 's') ADVANCE(2887);
      END_STATE();
    case 2299:
      if (lookahead == 's') ADVANCE(2931);
      END_STATE();
    case 2300:
      if (lookahead == 's') ADVANCE(2914);
      END_STATE();
    case 2301:
      if (lookahead == 's') ADVANCE(2857);
      END_STATE();
    case 2302:
      if (lookahead == 's') ADVANCE(3015);
      END_STATE();
    case 2303:
      if (lookahead == 's') ADVANCE(3016);
      END_STATE();
    case 2304:
      if (lookahead == 's') ADVANCE(3017);
      END_STATE();
    case 2305:
      if (lookahead == 's') ADVANCE(2979);
      END_STATE();
    case 2306:
      if (lookahead == 's') ADVANCE(3024);
      END_STATE();
    case 2307:
      if (lookahead == 's') ADVANCE(2936);
      END_STATE();
    case 2308:
      if (lookahead == 's') ADVANCE(1335);
      if (lookahead == 'u') ADVANCE(1333);
      END_STATE();
    case 2309:
      if (lookahead == 's') ADVANCE(3010);
      END_STATE();
    case 2310:
      if (lookahead == 's') ADVANCE(2975);
      END_STATE();
    case 2311:
      if (lookahead == 's') ADVANCE(2356);
      END_STATE();
    case 2312:
      if (lookahead == 's') ADVANCE(2421);
      END_STATE();
    case 2313:
      if (lookahead == 's') ADVANCE(1437);
      if (lookahead == 'u') ADVANCE(2491);
      END_STATE();
    case 2314:
      if (lookahead == 's') ADVANCE(1212);
      END_STATE();
    case 2315:
      if (lookahead == 's') ADVANCE(1912);
      END_STATE();
    case 2316:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 2317:
      if (lookahead == 's') ADVANCE(1262);
      END_STATE();
    case 2318:
      if (lookahead == 's') ADVANCE(1243);
      END_STATE();
    case 2319:
      if (lookahead == 's') ADVANCE(2276);
      END_STATE();
    case 2320:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 2321:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 2322:
      if (lookahead == 's') ADVANCE(2539);
      END_STATE();
    case 2323:
      if (lookahead == 's') ADVANCE(1267);
      END_STATE();
    case 2324:
      if (lookahead == 's') ADVANCE(494);
      END_STATE();
    case 2325:
      if (lookahead == 's') ADVANCE(2425);
      END_STATE();
    case 2326:
      if (lookahead == 's') ADVANCE(2430);
      END_STATE();
    case 2327:
      if (lookahead == 's') ADVANCE(1281);
      END_STATE();
    case 2328:
      if (lookahead == 's') ADVANCE(2432);
      END_STATE();
    case 2329:
      if (lookahead == 's') ADVANCE(1390);
      END_STATE();
    case 2330:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 2331:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 2332:
      if (lookahead == 's') ADVANCE(1326);
      END_STATE();
    case 2333:
      if (lookahead == 's') ADVANCE(1275);
      END_STATE();
    case 2334:
      if (lookahead == 's') ADVANCE(1276);
      END_STATE();
    case 2335:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 2336:
      if (lookahead == 's') ADVANCE(2464);
      END_STATE();
    case 2337:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 2338:
      if (lookahead == 's') ADVANCE(1282);
      END_STATE();
    case 2339:
      if (lookahead == 's') ADVANCE(1284);
      END_STATE();
    case 2340:
      if (lookahead == 's') ADVANCE(735);
      END_STATE();
    case 2341:
      if (lookahead == 's') ADVANCE(2469);
      END_STATE();
    case 2342:
      if (lookahead == 's') ADVANCE(2445);
      END_STATE();
    case 2343:
      if (lookahead == 's') ADVANCE(805);
      END_STATE();
    case 2344:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 2345:
      if (lookahead == 's') ADVANCE(2447);
      END_STATE();
    case 2346:
      if (lookahead == 's') ADVANCE(839);
      END_STATE();
    case 2347:
      if (lookahead == 's') ADVANCE(994);
      END_STATE();
    case 2348:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 2349:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 2350:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 2351:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 2352:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 2353:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 2354:
      if (lookahead == 's') ADVANCE(867);
      END_STATE();
    case 2355:
      if (lookahead == 's') ADVANCE(2522);
      END_STATE();
    case 2356:
      if (lookahead == 's') ADVANCE(1996);
      END_STATE();
    case 2357:
      if (lookahead == 's') ADVANCE(1223);
      END_STATE();
    case 2358:
      if (lookahead == 's') ADVANCE(1235);
      END_STATE();
    case 2359:
      if (lookahead == 's') ADVANCE(2557);
      END_STATE();
    case 2360:
      if (lookahead == 's') ADVANCE(2570);
      END_STATE();
    case 2361:
      if (lookahead == 's') ADVANCE(1301);
      END_STATE();
    case 2362:
      if (lookahead == 's') ADVANCE(2010);
      END_STATE();
    case 2363:
      if (lookahead == 's') ADVANCE(1314);
      END_STATE();
    case 2364:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 2365:
      if (lookahead == 's') ADVANCE(2748);
      END_STATE();
    case 2366:
      if (lookahead == 's') ADVANCE(2348);
      END_STATE();
    case 2367:
      if (lookahead == 's') ADVANCE(1315);
      END_STATE();
    case 2368:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 2369:
      if (lookahead == 's') ADVANCE(2343);
      END_STATE();
    case 2370:
      if (lookahead == 's') ADVANCE(856);
      END_STATE();
    case 2371:
      if (lookahead == 's') ADVANCE(2329);
      END_STATE();
    case 2372:
      if (lookahead == 's') ADVANCE(1292);
      END_STATE();
    case 2373:
      if (lookahead == 's') ADVANCE(834);
      END_STATE();
    case 2374:
      if (lookahead == 's') ADVANCE(2390);
      END_STATE();
    case 2375:
      if (lookahead == 's') ADVANCE(2558);
      END_STATE();
    case 2376:
      if (lookahead == 's') ADVANCE(2403);
      END_STATE();
    case 2377:
      if (lookahead == 's') ADVANCE(2353);
      END_STATE();
    case 2378:
      if (lookahead == 's') ADVANCE(2395);
      END_STATE();
    case 2379:
      if (lookahead == 's') ADVANCE(2415);
      END_STATE();
    case 2380:
      if (lookahead == 's') ADVANCE(2338);
      END_STATE();
    case 2381:
      if (lookahead == 's') ADVANCE(2493);
      END_STATE();
    case 2382:
      if (lookahead == 's') ADVANCE(868);
      END_STATE();
    case 2383:
      if (lookahead == 's') ADVANCE(2572);
      END_STATE();
    case 2384:
      if (lookahead == 's') ADVANCE(2543);
      END_STATE();
    case 2385:
      if (lookahead == 's') ADVANCE(2574);
      END_STATE();
    case 2386:
      if (lookahead == 's') ADVANCE(894);
      END_STATE();
    case 2387:
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 2388:
      if (lookahead == 's') ADVANCE(1322);
      END_STATE();
    case 2389:
      if (lookahead == 's') ADVANCE(996);
      END_STATE();
    case 2390:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 2391:
      if (lookahead == 's') ADVANCE(1334);
      END_STATE();
    case 2392:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 2393:
      if (lookahead == 's') ADVANCE(1377);
      END_STATE();
    case 2394:
      if (lookahead == 's') ADVANCE(2392);
      END_STATE();
    case 2395:
      if (lookahead == 's') ADVANCE(1343);
      END_STATE();
    case 2396:
      if (lookahead == 's') ADVANCE(1395);
      END_STATE();
    case 2397:
      if (lookahead == 's') ADVANCE(1019);
      END_STATE();
    case 2398:
      if (lookahead == 's') ADVANCE(2396);
      END_STATE();
    case 2399:
      if (lookahead == 's') ADVANCE(1032);
      END_STATE();
    case 2400:
      if (lookahead == 's') ADVANCE(1015);
      END_STATE();
    case 2401:
      if (lookahead == 's') ADVANCE(1044);
      END_STATE();
    case 2402:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 2403:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 2404:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 2405:
      if (lookahead == 's') ADVANCE(2563);
      END_STATE();
    case 2406:
      if (lookahead == 's') ADVANCE(2567);
      END_STATE();
    case 2407:
      if (lookahead == 's') ADVANCE(2566);
      END_STATE();
    case 2408:
      if (lookahead == 's') ADVANCE(2568);
      END_STATE();
    case 2409:
      if (lookahead == 's') ADVANCE(2569);
      END_STATE();
    case 2410:
      if (lookahead == 's') ADVANCE(2638);
      END_STATE();
    case 2411:
      if (lookahead == 's') ADVANCE(1421);
      END_STATE();
    case 2412:
      if (lookahead == 's') ADVANCE(1424);
      END_STATE();
    case 2413:
      if (lookahead == 's') ADVANCE(2411);
      END_STATE();
    case 2414:
      if (lookahead == 's') ADVANCE(2573);
      END_STATE();
    case 2415:
      if (lookahead == 's') ADVANCE(236);
      END_STATE();
    case 2416:
      if (lookahead == 's') ADVANCE(1074);
      END_STATE();
    case 2417:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 2418:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 2419:
      if (lookahead == 's') ADVANCE(2418);
      END_STATE();
    case 2420:
      if (lookahead == 's') ADVANCE(1079);
      if (lookahead == 't') ADVANCE(1099);
      END_STATE();
    case 2421:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 2422:
      if (lookahead == 't') ADVANCE(2851);
      END_STATE();
    case 2423:
      if (lookahead == 't') ADVANCE(3004);
      END_STATE();
    case 2424:
      if (lookahead == 't') ADVANCE(3054);
      END_STATE();
    case 2425:
      if (lookahead == 't') ADVANCE(3012);
      END_STATE();
    case 2426:
      if (lookahead == 't') ADVANCE(2852);
      END_STATE();
    case 2427:
      if (lookahead == 't') ADVANCE(2992);
      END_STATE();
    case 2428:
      if (lookahead == 't') ADVANCE(3022);
      END_STATE();
    case 2429:
      if (lookahead == 't') ADVANCE(3005);
      END_STATE();
    case 2430:
      if (lookahead == 't') ADVANCE(3081);
      END_STATE();
    case 2431:
      if (lookahead == 't') ADVANCE(2868);
      END_STATE();
    case 2432:
      if (lookahead == 't') ADVANCE(2828);
      END_STATE();
    case 2433:
      if (lookahead == 't') ADVANCE(2981);
      END_STATE();
    case 2434:
      if (lookahead == 't') ADVANCE(2838);
      END_STATE();
    case 2435:
      if (lookahead == 't') ADVANCE(2830);
      END_STATE();
    case 2436:
      if (lookahead == 't') ADVANCE(2959);
      END_STATE();
    case 2437:
      if (lookahead == 't') ADVANCE(3007);
      END_STATE();
    case 2438:
      if (lookahead == 't') ADVANCE(2993);
      END_STATE();
    case 2439:
      if (lookahead == 't') ADVANCE(2862);
      END_STATE();
    case 2440:
      if (lookahead == 't') ADVANCE(2813);
      END_STATE();
    case 2441:
      if (lookahead == 't') ADVANCE(3071);
      END_STATE();
    case 2442:
      if (lookahead == 't') ADVANCE(2831);
      END_STATE();
    case 2443:
      if (lookahead == 't') ADVANCE(2908);
      END_STATE();
    case 2444:
      if (lookahead == 't') ADVANCE(2815);
      END_STATE();
    case 2445:
      if (lookahead == 't') ADVANCE(3088);
      END_STATE();
    case 2446:
      if (lookahead == 't') ADVANCE(2863);
      END_STATE();
    case 2447:
      if (lookahead == 't') ADVANCE(3045);
      END_STATE();
    case 2448:
      if (lookahead == 't') ADVANCE(2979);
      END_STATE();
    case 2449:
      if (lookahead == 't') ADVANCE(3076);
      END_STATE();
    case 2450:
      if (lookahead == 't') ADVANCE(2975);
      END_STATE();
    case 2451:
      if (lookahead == 't') ADVANCE(2982);
      END_STATE();
    case 2452:
      if (lookahead == 't') ADVANCE(3029);
      END_STATE();
    case 2453:
      if (lookahead == 't') ADVANCE(1220);
      END_STATE();
    case 2454:
      if (lookahead == 't') ADVANCE(1211);
      END_STATE();
    case 2455:
      if (lookahead == 't') ADVANCE(2607);
      END_STATE();
    case 2456:
      if (lookahead == 't') ADVANCE(2015);
      END_STATE();
    case 2457:
      if (lookahead == 't') ADVANCE(1861);
      END_STATE();
    case 2458:
      if (lookahead == 't') ADVANCE(1213);
      END_STATE();
    case 2459:
      if (lookahead == 't') ADVANCE(1214);
      END_STATE();
    case 2460:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 2461:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 2462:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 2463:
      if (lookahead == 't') ADVANCE(1302);
      END_STATE();
    case 2464:
      if (lookahead == 't') ADVANCE(650);
      END_STATE();
    case 2465:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 2466:
      if (lookahead == 't') ADVANCE(1829);
      END_STATE();
    case 2467:
      if (lookahead == 't') ADVANCE(2275);
      END_STATE();
    case 2468:
      if (lookahead == 't') ADVANCE(2711);
      END_STATE();
    case 2469:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 2470:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 2471:
      if (lookahead == 't') ADVANCE(1830);
      END_STATE();
    case 2472:
      if (lookahead == 't') ADVANCE(1313);
      END_STATE();
    case 2473:
      if (lookahead == 't') ADVANCE(2725);
      END_STATE();
    case 2474:
      if (lookahead == 't') ADVANCE(1874);
      END_STATE();
    case 2475:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 2476:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 2477:
      if (lookahead == 't') ADVANCE(2106);
      END_STATE();
    case 2478:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 2479:
      if (lookahead == 't') ADVANCE(2287);
      END_STATE();
    case 2480:
      if (lookahead == 't') ADVANCE(1834);
      END_STATE();
    case 2481:
      if (lookahead == 't') ADVANCE(2294);
      END_STATE();
    case 2482:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 2483:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 2484:
      if (lookahead == 't') ADVANCE(1838);
      END_STATE();
    case 2485:
      if (lookahead == 't') ADVANCE(2123);
      END_STATE();
    case 2486:
      if (lookahead == 't') ADVANCE(2301);
      END_STATE();
    case 2487:
      if (lookahead == 't') ADVANCE(2163);
      END_STATE();
    case 2488:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 2489:
      if (lookahead == 't') ADVANCE(2307);
      END_STATE();
    case 2490:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 2491:
      if (lookahead == 't') ADVANCE(1843);
      END_STATE();
    case 2492:
      if (lookahead == 't') ADVANCE(1844);
      END_STATE();
    case 2493:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 2494:
      if (lookahead == 't') ADVANCE(1896);
      END_STATE();
    case 2495:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 2496:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 2497:
      if (lookahead == 't') ADVANCE(1845);
      END_STATE();
    case 2498:
      if (lookahead == 't') ADVANCE(2131);
      END_STATE();
    case 2499:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 2500:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 2501:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 2502:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 2503:
      if (lookahead == 't') ADVANCE(761);
      END_STATE();
    case 2504:
      if (lookahead == 't') ADVANCE(774);
      END_STATE();
    case 2505:
      if (lookahead == 't') ADVANCE(1659);
      END_STATE();
    case 2506:
      if (lookahead == 't') ADVANCE(1890);
      END_STATE();
    case 2507:
      if (lookahead == 't') ADVANCE(2597);
      END_STATE();
    case 2508:
      if (lookahead == 't') ADVANCE(1374);
      END_STATE();
    case 2509:
      if (lookahead == 't') ADVANCE(1285);
      END_STATE();
    case 2510:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 2511:
      if (lookahead == 't') ADVANCE(931);
      END_STATE();
    case 2512:
      if (lookahead == 't') ADVANCE(1257);
      END_STATE();
    case 2513:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 2514:
      if (lookahead == 't') ADVANCE(1286);
      END_STATE();
    case 2515:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 2516:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 2517:
      if (lookahead == 't') ADVANCE(2485);
      END_STATE();
    case 2518:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 2519:
      if (lookahead == 't') ADVANCE(1287);
      END_STATE();
    case 2520:
      if (lookahead == 't') ADVANCE(1274);
      END_STATE();
    case 2521:
      if (lookahead == 't') ADVANCE(1347);
      END_STATE();
    case 2522:
      if (lookahead == 't') ADVANCE(1878);
      END_STATE();
    case 2523:
      if (lookahead == 't') ADVANCE(1290);
      END_STATE();
    case 2524:
      if (lookahead == 't') ADVANCE(1297);
      END_STATE();
    case 2525:
      if (lookahead == 't') ADVANCE(1298);
      END_STATE();
    case 2526:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 2527:
      if (lookahead == 't') ADVANCE(848);
      END_STATE();
    case 2528:
      if (lookahead == 't') ADVANCE(1299);
      END_STATE();
    case 2529:
      if (lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 2530:
      if (lookahead == 't') ADVANCE(891);
      END_STATE();
    case 2531:
      if (lookahead == 't') ADVANCE(893);
      END_STATE();
    case 2532:
      if (lookahead == 't') ADVANCE(2625);
      END_STATE();
    case 2533:
      if (lookahead == 't') ADVANCE(2019);
      END_STATE();
    case 2534:
      if (lookahead == 't') ADVANCE(1323);
      END_STATE();
    case 2535:
      if (lookahead == 't') ADVANCE(2027);
      END_STATE();
    case 2536:
      if (lookahead == 't') ADVANCE(2177);
      END_STATE();
    case 2537:
      if (lookahead == 't') ADVANCE(1321);
      END_STATE();
    case 2538:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 2539:
      if (lookahead == 't') ADVANCE(934);
      END_STATE();
    case 2540:
      if (lookahead == 't') ADVANCE(2201);
      END_STATE();
    case 2541:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 2542:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 2543:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 2544:
      if (lookahead == 't') ADVANCE(2630);
      END_STATE();
    case 2545:
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 2546:
      if (lookahead == 't') ADVANCE(1327);
      END_STATE();
    case 2547:
      if (lookahead == 't') ADVANCE(2211);
      END_STATE();
    case 2548:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 2549:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 2550:
      if (lookahead == 't') ADVANCE(1324);
      END_STATE();
    case 2551:
      if (lookahead == 't') ADVANCE(1336);
      END_STATE();
    case 2552:
      if (lookahead == 't') ADVANCE(2219);
      END_STATE();
    case 2553:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 2554:
      if (lookahead == 't') ADVANCE(1338);
      END_STATE();
    case 2555:
      if (lookahead == 't') ADVANCE(1348);
      END_STATE();
    case 2556:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 2557:
      if (lookahead == 't') ADVANCE(2223);
      END_STATE();
    case 2558:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 2559:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 2560:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 2561:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 2562:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 2563:
      if (lookahead == 't') ADVANCE(2228);
      END_STATE();
    case 2564:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 2565:
      if (lookahead == 't') ADVANCE(1667);
      END_STATE();
    case 2566:
      if (lookahead == 't') ADVANCE(2230);
      END_STATE();
    case 2567:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 2568:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 2569:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 2570:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 2571:
      if (lookahead == 't') ADVANCE(2241);
      END_STATE();
    case 2572:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 2573:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 2574:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 2575:
      if (lookahead == 'u') ADVANCE(1245);
      END_STATE();
    case 2576:
      if (lookahead == 'u') ADVANCE(2976);
      END_STATE();
    case 2577:
      if (lookahead == 'u') ADVANCE(3029);
      END_STATE();
    case 2578:
      if (lookahead == 'u') ADVANCE(987);
      END_STATE();
    case 2579:
      if (lookahead == 'u') ADVANCE(2312);
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 2580:
      if (lookahead == 'u') ADVANCE(1997);
      END_STATE();
    case 2581:
      if (lookahead == 'u') ADVANCE(1580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 2582:
      if (lookahead == 'u') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 2583:
      if (lookahead == 'u') ADVANCE(2423);
      END_STATE();
    case 2584:
      if (lookahead == 'u') ADVANCE(1985);
      END_STATE();
    case 2585:
      if (lookahead == 'u') ADVANCE(510);
      END_STATE();
    case 2586:
      if (lookahead == 'u') ADVANCE(1986);
      END_STATE();
    case 2587:
      if (lookahead == 'u') ADVANCE(1519);
      END_STATE();
    case 2588:
      if (lookahead == 'u') ADVANCE(1988);
      END_STATE();
    case 2589:
      if (lookahead == 'u') ADVANCE(2001);
      END_STATE();
    case 2590:
      if (lookahead == 'u') ADVANCE(1084);
      END_STATE();
    case 2591:
      if (lookahead == 'u') ADVANCE(2429);
      END_STATE();
    case 2592:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 2593:
      if (lookahead == 'u') ADVANCE(2166);
      END_STATE();
    case 2594:
      if (lookahead == 'u') ADVANCE(1133);
      END_STATE();
    case 2595:
      if (lookahead == 'u') ADVANCE(1990);
      END_STATE();
    case 2596:
      if (lookahead == 'u') ADVANCE(1762);
      END_STATE();
    case 2597:
      if (lookahead == 'u') ADVANCE(2180);
      END_STATE();
    case 2598:
      if (lookahead == 'u') ADVANCE(2122);
      END_STATE();
    case 2599:
      if (lookahead == 'u') ADVANCE(2125);
      END_STATE();
    case 2600:
      if (lookahead == 'u') ADVANCE(2126);
      END_STATE();
    case 2601:
      if (lookahead == 'u') ADVANCE(2127);
      END_STATE();
    case 2602:
      if (lookahead == 'u') ADVANCE(2129);
      END_STATE();
    case 2603:
      if (lookahead == 'u') ADVANCE(2133);
      END_STATE();
    case 2604:
      if (lookahead == 'u') ADVANCE(2135);
      END_STATE();
    case 2605:
      if (lookahead == 'u') ADVANCE(2115);
      END_STATE();
    case 2606:
      if (lookahead == 'u') ADVANCE(1380);
      END_STATE();
    case 2607:
      if (lookahead == 'u') ADVANCE(2344);
      END_STATE();
    case 2608:
      if (lookahead == 'u') ADVANCE(691);
      END_STATE();
    case 2609:
      if (lookahead == 'u') ADVANCE(2005);
      END_STATE();
    case 2610:
      if (lookahead == 'u') ADVANCE(2324);
      END_STATE();
    case 2611:
      if (lookahead == 'u') ADVANCE(1539);
      END_STATE();
    case 2612:
      if (lookahead == 'u') ADVANCE(1720);
      END_STATE();
    case 2613:
      if (lookahead == 'u') ADVANCE(1541);
      END_STATE();
    case 2614:
      if (lookahead == 'u') ADVANCE(1320);
      END_STATE();
    case 2615:
      if (lookahead == 'u') ADVANCE(1266);
      END_STATE();
    case 2616:
      if (lookahead == 'u') ADVANCE(2328);
      END_STATE();
    case 2617:
      if (lookahead == 'u') ADVANCE(2513);
      END_STATE();
    case 2618:
      if (lookahead == 'u') ADVANCE(1270);
      END_STATE();
    case 2619:
      if (lookahead == 'u') ADVANCE(2325);
      END_STATE();
    case 2620:
      if (lookahead == 'u') ADVANCE(1271);
      END_STATE();
    case 2621:
      if (lookahead == 'u') ADVANCE(2336);
      END_STATE();
    case 2622:
      if (lookahead == 'u') ADVANCE(1272);
      END_STATE();
    case 2623:
      if (lookahead == 'u') ADVANCE(2341);
      END_STATE();
    case 2624:
      if (lookahead == 'u') ADVANCE(2345);
      END_STATE();
    case 2625:
      if (lookahead == 'u') ADVANCE(2352);
      END_STATE();
    case 2626:
      if (lookahead == 'u') ADVANCE(1118);
      END_STATE();
    case 2627:
      if (lookahead == 'u') ADVANCE(2382);
      END_STATE();
    case 2628:
      if (lookahead == 'u') ADVANCE(1585);
      END_STATE();
    case 2629:
      if (lookahead == 'u') ADVANCE(2527);
      END_STATE();
    case 2630:
      if (lookahead == 'u') ADVANCE(2189);
      END_STATE();
    case 2631:
      if (lookahead == 'u') ADVANCE(1368);
      END_STATE();
    case 2632:
      if (lookahead == 'u') ADVANCE(1586);
      END_STATE();
    case 2633:
      if (lookahead == 'u') ADVANCE(2384);
      END_STATE();
    case 2634:
      if (lookahead == 'u') ADVANCE(2533);
      END_STATE();
    case 2635:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 2636:
      if (lookahead == 'u') ADVANCE(2243);
      END_STATE();
    case 2637:
      if (lookahead == 'u') ADVANCE(2402);
      END_STATE();
    case 2638:
      if (lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 2639:
      if (lookahead == 'u') ADVANCE(706);
      END_STATE();
    case 2640:
      if (lookahead == 'v') ADVANCE(1289);
      END_STATE();
    case 2641:
      if (lookahead == 'v') ADVANCE(1872);
      END_STATE();
    case 2642:
      if (lookahead == 'v') ADVANCE(778);
      END_STATE();
    case 2643:
      if (lookahead == 'v') ADVANCE(1854);
      END_STATE();
    case 2644:
      if (lookahead == 'v') ADVANCE(836);
      END_STATE();
    case 2645:
      if (lookahead == 'v') ADVANCE(737);
      END_STATE();
    case 2646:
      if (lookahead == 'v') ADVANCE(2306);
      END_STATE();
    case 2647:
      if (lookahead == 'v') ADVANCE(844);
      END_STATE();
    case 2648:
      if (lookahead == 'v') ADVANCE(845);
      END_STATE();
    case 2649:
      if (lookahead == 'v') ADVANCE(849);
      END_STATE();
    case 2650:
      if (lookahead == 'v') ADVANCE(855);
      END_STATE();
    case 2651:
      if (lookahead == 'v') ADVANCE(756);
      END_STATE();
    case 2652:
      if (lookahead == 'v') ADVANCE(858);
      END_STATE();
    case 2653:
      if (lookahead == 'v') ADVANCE(862);
      END_STATE();
    case 2654:
      if (lookahead == 'v') ADVANCE(766);
      END_STATE();
    case 2655:
      if (lookahead == 'v') ADVANCE(429);
      END_STATE();
    case 2656:
      if (lookahead == 'v') ADVANCE(1471);
      END_STATE();
    case 2657:
      if (lookahead == 'v') ADVANCE(890);
      END_STATE();
    case 2658:
      if (lookahead == 'v') ADVANCE(907);
      END_STATE();
    case 2659:
      if (lookahead == 'v') ADVANCE(859);
      END_STATE();
    case 2660:
      if (lookahead == 'v') ADVANCE(1001);
      END_STATE();
    case 2661:
      if (lookahead == 'v') ADVANCE(870);
      END_STATE();
    case 2662:
      if (lookahead == 'v') ADVANCE(956);
      END_STATE();
    case 2663:
      if (lookahead == 'v') ADVANCE(889);
      END_STATE();
    case 2664:
      if (lookahead == 'v') ADVANCE(892);
      END_STATE();
    case 2665:
      if (lookahead == 'v') ADVANCE(993);
      END_STATE();
    case 2666:
      if (lookahead == 'v') ADVANCE(456);
      END_STATE();
    case 2667:
      if (lookahead == 'v') ADVANCE(492);
      END_STATE();
    case 2668:
      if (lookahead == 'v') ADVANCE(1026);
      END_STATE();
    case 2669:
      if (lookahead == 'v') ADVANCE(1036);
      END_STATE();
    case 2670:
      if (lookahead == 'v') ADVANCE(1042);
      END_STATE();
    case 2671:
      if (lookahead == 'v') ADVANCE(1066);
      END_STATE();
    case 2672:
      if (lookahead == 'w') ADVANCE(3012);
      END_STATE();
    case 2673:
      if (lookahead == 'w') ADVANCE(1785);
      END_STATE();
    case 2674:
      if (lookahead == 'w') ADVANCE(31);
      END_STATE();
    case 2675:
      if (lookahead == 'w') ADVANCE(34);
      END_STATE();
    case 2676:
      if (lookahead == 'w') ADVANCE(109);
      END_STATE();
    case 2677:
      if (lookahead == 'w') ADVANCE(1694);
      END_STATE();
    case 2678:
      if (lookahead == 'w') ADVANCE(1695);
      END_STATE();
    case 2679:
      if (lookahead == 'w') ADVANCE(2168);
      END_STATE();
    case 2680:
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 2681:
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 2682:
      if (lookahead == 'w') ADVANCE(1740);
      END_STATE();
    case 2683:
      if (lookahead == 'w') ADVANCE(453);
      END_STATE();
    case 2684:
      if (lookahead == 'w') ADVANCE(421);
      END_STATE();
    case 2685:
      if (lookahead == 'w') ADVANCE(1642);
      END_STATE();
    case 2686:
      if (lookahead == 'w') ADVANCE(880);
      END_STATE();
    case 2687:
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 2688:
      if (lookahead == 'w') ADVANCE(2386);
      END_STATE();
    case 2689:
      if (lookahead == 'w') ADVANCE(167);
      END_STATE();
    case 2690:
      if (lookahead == 'w') ADVANCE(180);
      END_STATE();
    case 2691:
      if (lookahead == 'w') ADVANCE(490);
      END_STATE();
    case 2692:
      if (lookahead == 'w') ADVANCE(234);
      END_STATE();
    case 2693:
      if (lookahead == 'x') ADVANCE(2936);
      END_STATE();
    case 2694:
      if (lookahead == 'x') ADVANCE(2505);
      END_STATE();
    case 2695:
      if (lookahead == 'x') ADVANCE(2020);
      END_STATE();
    case 2696:
      if (lookahead == 'x') ADVANCE(2535);
      END_STATE();
    case 2697:
      if (lookahead == 'x') ADVANCE(2029);
      END_STATE();
    case 2698:
      if (lookahead == 'x') ADVANCE(2024);
      END_STATE();
    case 2699:
      if (lookahead == 'x') ADVANCE(2036);
      END_STATE();
    case 2700:
      if (lookahead == 'x') ADVANCE(2043);
      END_STATE();
    case 2701:
      if (lookahead == 'x') ADVANCE(2048);
      END_STATE();
    case 2702:
      if (lookahead == 'x') ADVANCE(2051);
      END_STATE();
    case 2703:
      if (lookahead == 'x') ADVANCE(2054);
      END_STATE();
    case 2704:
      if (lookahead == 'x') ADVANCE(2056);
      END_STATE();
    case 2705:
      if (lookahead == 'x') ADVANCE(2057);
      END_STATE();
    case 2706:
      if (lookahead == 'x') ADVANCE(2565);
      END_STATE();
    case 2707:
      if (lookahead == 'x') ADVANCE(2801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 2708:
      if (lookahead == 'y') ADVANCE(2817);
      END_STATE();
    case 2709:
      if (lookahead == 'y') ADVANCE(3012);
      END_STATE();
    case 2710:
      if (lookahead == 'y') ADVANCE(2883);
      END_STATE();
    case 2711:
      if (lookahead == 'y') ADVANCE(2938);
      END_STATE();
    case 2712:
      if (lookahead == 'y') ADVANCE(2933);
      END_STATE();
    case 2713:
      if (lookahead == 'y') ADVANCE(2918);
      END_STATE();
    case 2714:
      if (lookahead == 'y') ADVANCE(2970);
      END_STATE();
    case 2715:
      if (lookahead == 'y') ADVANCE(2930);
      END_STATE();
    case 2716:
      if (lookahead == 'y') ADVANCE(2929);
      END_STATE();
    case 2717:
      if (lookahead == 'y') ADVANCE(2923);
      END_STATE();
    case 2718:
      if (lookahead == 'y') ADVANCE(2895);
      END_STATE();
    case 2719:
      if (lookahead == 'y') ADVANCE(2986);
      END_STATE();
    case 2720:
      if (lookahead == 'y') ADVANCE(3082);
      END_STATE();
    case 2721:
      if (lookahead == 'y') ADVANCE(2928);
      END_STATE();
    case 2722:
      if (lookahead == 'y') ADVANCE(2896);
      END_STATE();
    case 2723:
      if (lookahead == 'y') ADVANCE(3045);
      END_STATE();
    case 2724:
      if (lookahead == 'y') ADVANCE(2234);
      END_STATE();
    case 2725:
      if (lookahead == 'y') ADVANCE(2936);
      END_STATE();
    case 2726:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 2727:
      if (lookahead == 'y') ADVANCE(2337);
      END_STATE();
    case 2728:
      if (lookahead == 'y') ADVANCE(2033);
      END_STATE();
    case 2729:
      if (lookahead == 'y') ADVANCE(2271);
      END_STATE();
    case 2730:
      if (lookahead == 'y') ADVANCE(2208);
      END_STATE();
    case 2731:
      if (lookahead == 'y') ADVANCE(2028);
      END_STATE();
    case 2732:
      if (lookahead == 'y') ADVANCE(2270);
      END_STATE();
    case 2733:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 2734:
      if (lookahead == 'y') ADVANCE(2307);
      END_STATE();
    case 2735:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 2736:
      if (lookahead == 'y') ADVANCE(2310);
      END_STATE();
    case 2737:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 2738:
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 2739:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 2740:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 2741:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 2742:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 2743:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 2744:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 2745:
      if (lookahead == 'y') ADVANCE(1857);
      END_STATE();
    case 2746:
      if (lookahead == 'y') ADVANCE(1255);
      END_STATE();
    case 2747:
      if (lookahead == 'y') ADVANCE(1310);
      END_STATE();
    case 2748:
      if (lookahead == 'y') ADVANCE(2322);
      END_STATE();
    case 2749:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 2750:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 2751:
      if (lookahead == 'y') ADVANCE(960);
      END_STATE();
    case 2752:
      if (lookahead == 'y') ADVANCE(2397);
      END_STATE();
    case 2753:
      if (lookahead == 'y') ADVANCE(149);
      END_STATE();
    case 2754:
      if (lookahead == 'y') ADVANCE(977);
      END_STATE();
    case 2755:
      if (lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 2756:
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 2757:
      if (lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 2758:
      if (lookahead == 'y') ADVANCE(2044);
      END_STATE();
    case 2759:
      if (lookahead == 'y') ADVANCE(181);
      END_STATE();
    case 2760:
      if (lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 2761:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 2762:
      if (lookahead == 'y') ADVANCE(2049);
      END_STATE();
    case 2763:
      if (lookahead == 'y') ADVANCE(2232);
      END_STATE();
    case 2764:
      if (lookahead == 'y') ADVANCE(2233);
      END_STATE();
    case 2765:
      if (lookahead == 'y') ADVANCE(223);
      END_STATE();
    case 2766:
      if (lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 2767:
      if (lookahead == 'y') ADVANCE(2399);
      END_STATE();
    case 2768:
      if (lookahead == 'y') ADVANCE(2401);
      END_STATE();
    case 2769:
      if (lookahead == 'y') ADVANCE(1978);
      END_STATE();
    case 2770:
      if (lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 2771:
      if (lookahead == 'z') ADVANCE(733);
      END_STATE();
    case 2772:
      if (lookahead == 'z') ADVANCE(765);
      END_STATE();
    case 2773:
      if (lookahead == 'z') ADVANCE(895);
      END_STATE();
    case 2774:
      if (lookahead == '{') ADVANCE(2070);
      END_STATE();
    case 2775:
      if (lookahead == '}') ADVANCE(2948);
      END_STATE();
    case 2776:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(3024);
      END_STATE();
    case 2777:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(211);
      END_STATE();
    case 2778:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2777);
      END_STATE();
    case 2779:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2778);
      END_STATE();
    case 2780:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2780);
      END_STATE();
    case 2781:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3124);
      END_STATE();
    case 2782:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3125);
      END_STATE();
    case 2783:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3138);
      END_STATE();
    case 2784:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3139);
      END_STATE();
    case 2785:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 2786:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2785);
      END_STATE();
    case 2787:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2783);
      END_STATE();
    case 2788:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2790);
      END_STATE();
    case 2789:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2784);
      END_STATE();
    case 2790:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 2791:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2786);
      END_STATE();
    case 2792:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2787);
      END_STATE();
    case 2793:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2791);
      END_STATE();
    case 2794:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 2795:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2792);
      END_STATE();
    case 2796:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2793);
      END_STATE();
    case 2797:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2794);
      END_STATE();
    case 2798:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2795);
      END_STATE();
    case 2799:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2796);
      END_STATE();
    case 2800:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2798);
      END_STATE();
    case 2801:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2808);
      END_STATE();
    case 2802:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3123);
      END_STATE();
    case 2803:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2802);
      END_STATE();
    case 2804:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2803);
      END_STATE();
    case 2805:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 2806:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 2807:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 2808:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 2809:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 2810:
      if (eof) ADVANCE(2811);
      if (lookahead == '\n') ADVANCE(2812);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(3048);
      if (lookahead == '#') ADVANCE(3142);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '0') ADVANCE(2707);
      if (lookahead == '3') ADVANCE(317);
      if (lookahead == '=') ADVANCE(2999);
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead == 'B') ADVANCE(339);
      if (lookahead == 'C') ADVANCE(305);
      if (lookahead == 'D') ADVANCE(351);
      if (lookahead == 'E') ADVANCE(312);
      if (lookahead == 'I') ADVANCE(313);
      if (lookahead == 'R') ADVANCE(332);
      if (lookahead == 'S') ADVANCE(330);
      if (lookahead == 'T') ADVANCE(360);
      if (lookahead == 'U') ADVANCE(1679);
      if (lookahead == 'Z') ADVANCE(335);
      if (lookahead == 'a') ADVANCE(626);
      if (lookahead == 'b') ADVANCE(362);
      if (lookahead == 'c') ADVANCE(716);
      if (lookahead == 'd') ADVANCE(717);
      if (lookahead == 'e') ADVANCE(1619);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'g') ADVANCE(1696);
      if (lookahead == 'h') ADVANCE(1241);
      if (lookahead == 'i') ADVANCE(1146);
      if (lookahead == 'k') ADVANCE(718);
      if (lookahead == 'l') ADVANCE(627);
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(1826);
      if (lookahead == 'o') ADVANCE(2013);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 't') ADVANCE(720);
      if (lookahead == 'u') ADVANCE(1697);
      if (lookahead == 'v') ADVANCE(785);
      if (lookahead == 'w') ADVANCE(779);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3148);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == 'F') ADVANCE(2808);
      END_STATE();
    case 2811:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2812:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 2813:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(2354);
      END_STATE();
    case 2814:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 2817:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      END_STATE();
    case 2818:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      END_STATE();
    case 2819:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      END_STATE();
    case 2820:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      END_STATE();
    case 2821:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      END_STATE();
    case 2822:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      END_STATE();
    case 2823:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      END_STATE();
    case 2824:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      END_STATE();
    case 2825:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      END_STATE();
    case 2828:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      END_STATE();
    case 2829:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      END_STATE();
    case 2830:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      END_STATE();
    case 2831:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      END_STATE();
    case 2834:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      END_STATE();
    case 2835:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      END_STATE();
    case 2838:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      END_STATE();
    case 2839:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      END_STATE();
    case 2840:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      END_STATE();
    case 2841:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      END_STATE();
    case 2842:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      END_STATE();
    case 2843:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      END_STATE();
    case 2845:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      END_STATE();
    case 2846:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      END_STATE();
    case 2847:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      END_STATE();
    case 2848:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      END_STATE();
    case 2849:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      END_STATE();
    case 2850:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      END_STATE();
    case 2851:
      ACCEPT_TOKEN(anon_sym_expert);
      END_STATE();
    case 2852:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      END_STATE();
    case 2853:
      ACCEPT_TOKEN(anon_sym_no_DASHencrypt_DASHto);
      END_STATE();
    case 2854:
      ACCEPT_TOKEN(anon_sym_no_DASHgroups);
      END_STATE();
    case 2855:
      ACCEPT_TOKEN(anon_sym_try_DASHall_DASHsecrets);
      END_STATE();
    case 2856:
      ACCEPT_TOKEN(anon_sym_skip_DASHhidden_DASHrecipients);
      END_STATE();
    case 2857:
      ACCEPT_TOKEN(anon_sym_no_DASHskip_DASHhidden_DASHrecipients);
      END_STATE();
    case 2858:
      ACCEPT_TOKEN(anon_sym_armor);
      END_STATE();
    case 2859:
      ACCEPT_TOKEN(anon_sym_no_DASHarmor);
      END_STATE();
    case 2860:
      ACCEPT_TOKEN(anon_sym_with_DASHcolons);
      END_STATE();
    case 2861:
      ACCEPT_TOKEN(anon_sym_legacy_DASHlist_DASHmode);
      END_STATE();
    case 2862:
      ACCEPT_TOKEN(anon_sym_with_DASHfingerprint);
      END_STATE();
    case 2863:
      ACCEPT_TOKEN(anon_sym_with_DASHsubkey_DASHfingerprint);
      END_STATE();
    case 2864:
      ACCEPT_TOKEN(anon_sym_with_DASHicao_DASHspelling);
      END_STATE();
    case 2865:
      ACCEPT_TOKEN(anon_sym_with_DASHkeygrip);
      END_STATE();
    case 2866:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHorigin);
      END_STATE();
    case 2867:
      ACCEPT_TOKEN(anon_sym_with_DASHwkd_DASHhash);
      END_STATE();
    case 2868:
      ACCEPT_TOKEN(anon_sym_with_DASHsecret);
      END_STATE();
    case 2869:
      ACCEPT_TOKEN(anon_sym_textmode);
      END_STATE();
    case 2870:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      END_STATE();
    case 2871:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      END_STATE();
    case 2872:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      END_STATE();
    case 2873:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      END_STATE();
    case 2874:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      END_STATE();
    case 2875:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      END_STATE();
    case 2876:
      ACCEPT_TOKEN(anon_sym_gnupg);
      END_STATE();
    case 2877:
      ACCEPT_TOKEN(anon_sym_openpgp);
      END_STATE();
    case 2878:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(1264);
      END_STATE();
    case 2879:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      END_STATE();
    case 2880:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      END_STATE();
    case 2881:
      ACCEPT_TOKEN(anon_sym_pgp7);
      END_STATE();
    case 2882:
      ACCEPT_TOKEN(anon_sym_pgp8);
      END_STATE();
    case 2883:
      ACCEPT_TOKEN(anon_sym_list_DASHonly);
      END_STATE();
    case 2884:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 2885:
      ACCEPT_TOKEN(anon_sym_debug_DASHall);
      if (lookahead == 'o') ADVANCE(2680);
      END_STATE();
    case 2886:
      ACCEPT_TOKEN(anon_sym_debug_DASHiolbf);
      END_STATE();
    case 2887:
      ACCEPT_TOKEN(anon_sym_debug_DASHallow_DASHlarge_DASHchunks);
      END_STATE();
    case 2888:
      ACCEPT_TOKEN(anon_sym_debug_DASHignore_DASHexpiration);
      END_STATE();
    case 2889:
      ACCEPT_TOKEN(anon_sym_full_DASHtimestrings);
      END_STATE();
    case 2890:
      ACCEPT_TOKEN(anon_sym_enable_DASHprogress_DASHfilter);
      END_STATE();
    case 2891:
      ACCEPT_TOKEN(anon_sym_log_DASHtime);
      END_STATE();
    case 2892:
      ACCEPT_TOKEN(anon_sym_no_DASHcomments);
      END_STATE();
    case 2893:
      ACCEPT_TOKEN(anon_sym_emit_DASHversion);
      END_STATE();
    case 2894:
      ACCEPT_TOKEN(anon_sym_no_DASHemit_DASHversion);
      END_STATE();
    case 2895:
      ACCEPT_TOKEN(anon_sym_for_DASHyour_DASHeyes_DASHonly);
      END_STATE();
    case 2896:
      ACCEPT_TOKEN(anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly);
      END_STATE();
    case 2897:
      ACCEPT_TOKEN(anon_sym_use_DASHembedded_DASHfilename);
      END_STATE();
    case 2898:
      ACCEPT_TOKEN(anon_sym_no_DASHuse_DASHembedded_DASHfilename);
      END_STATE();
    case 2899:
      ACCEPT_TOKEN(anon_sym_throw_DASHkeyids);
      END_STATE();
    case 2900:
      ACCEPT_TOKEN(anon_sym_no_DASHthrow_DASHkeyids);
      END_STATE();
    case 2901:
      ACCEPT_TOKEN(anon_sym_not_DASHdash_DASHescaped);
      END_STATE();
    case 2902:
      ACCEPT_TOKEN(anon_sym_escape_DASHfrom_DASHlines);
      END_STATE();
    case 2903:
      ACCEPT_TOKEN(anon_sym_no_DASHescape_DASHfrom_DASHlines);
      END_STATE();
    case 2904:
      ACCEPT_TOKEN(anon_sym_no_DASHsymkey_DASHcache);
      END_STATE();
    case 2905:
      ACCEPT_TOKEN(anon_sym_allow_DASHnon_DASHselfsigned_DASHuid);
      END_STATE();
    case 2906:
      ACCEPT_TOKEN(anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid);
      END_STATE();
    case 2907:
      ACCEPT_TOKEN(anon_sym_allow_DASHfreeform_DASHuid);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(anon_sym_ignore_DASHtime_DASHconflict);
      END_STATE();
    case 2909:
      ACCEPT_TOKEN(anon_sym_ignore_DASHvalid_DASHfrom);
      END_STATE();
    case 2910:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcrc_DASHerror);
      END_STATE();
    case 2911:
      ACCEPT_TOKEN(anon_sym_ignore_DASHmdc_DASHerror);
      END_STATE();
    case 2912:
      ACCEPT_TOKEN(anon_sym_allow_DASHold_DASHcipher_DASHalgos);
      END_STATE();
    case 2913:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHdigest_DASHalgos);
      END_STATE();
    case 2914:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHkey_DASHsignatures);
      END_STATE();
    case 2915:
      ACCEPT_TOKEN(anon_sym_override_DASHcompliance_DASHcheck);
      END_STATE();
    case 2916:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHkeyring);
      END_STATE();
    case 2917:
      ACCEPT_TOKEN(anon_sym_no_DASHkeyring);
      END_STATE();
    case 2918:
      ACCEPT_TOKEN(anon_sym_skip_DASHverify);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHdata);
      END_STATE();
    case 2920:
      ACCEPT_TOKEN(anon_sym_list_DASHsignatures);
      END_STATE();
    case 2921:
      ACCEPT_TOKEN(anon_sym_list_DASHsigs);
      END_STATE();
    case 2922:
      ACCEPT_TOKEN(anon_sym_fast_DASHlist_DASHmode);
      END_STATE();
    case 2923:
      ACCEPT_TOKEN(anon_sym_show_DASHsession_DASHkey);
      END_STATE();
    case 2924:
      ACCEPT_TOKEN(anon_sym_ask_DASHsig_DASHexpire);
      END_STATE();
    case 2925:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHsig_DASHexpire);
      END_STATE();
    case 2926:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHexpire);
      END_STATE();
    case 2927:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHexpire);
      END_STATE();
    case 2928:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey);
      END_STATE();
    case 2929:
      ACCEPT_TOKEN(anon_sym_force_DASHsign_DASHkey);
      END_STATE();
    case 2930:
      ACCEPT_TOKEN(anon_sym_forbid_DASHgen_DASHkey);
      END_STATE();
    case 2931:
      ACCEPT_TOKEN(anon_sym_enable_DASHspecial_DASHfilenames);
      END_STATE();
    case 2932:
      ACCEPT_TOKEN(anon_sym_preserve_DASHpermissions);
      END_STATE();
    case 2933:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == 's') ADVANCE(1040);
      END_STATE();
    case 2934:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      END_STATE();
    case 2935:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 2936:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 2937:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      END_STATE();
    case 2938:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 2939:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      END_STATE();
    case 2940:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 2941:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (lookahead == '%' ||
          lookahead == 'K' ||
          lookahead == 'S' ||
          lookahead == 'c' ||
          lookahead == 'f' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'p' ||
          lookahead == 's') ADVANCE(3058);
      END_STATE();
    case 2942:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(2954);
      END_STATE();
    case 2943:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2944:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3141);
      END_STATE();
    case 2945:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 2946:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(2774);
      END_STATE();
    case 2947:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(2954);
      END_STATE();
    case 2948:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 2949:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 2950:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3141);
      END_STATE();
    case 2951:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 2952:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(2774);
      END_STATE();
    case 2953:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(2954);
      END_STATE();
    case 2954:
      ACCEPT_TOKEN(aux_sym__command_format_token1);
      END_STATE();
    case 2955:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      END_STATE();
    case 2956:
      ACCEPT_TOKEN(anon_sym_keyring);
      END_STATE();
    case 2957:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      END_STATE();
    case 2958:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      END_STATE();
    case 2959:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      END_STATE();
    case 2960:
      ACCEPT_TOKEN(sym__charset_value);
      END_STATE();
    case 2961:
      ACCEPT_TOKEN(sym__charset_value);
      if (lookahead == '5') ADVANCE(2960);
      END_STATE();
    case 2962:
      ACCEPT_TOKEN(sym__utf8_strings);
      END_STATE();
    case 2963:
      ACCEPT_TOKEN(sym__no_utf8_strings);
      END_STATE();
    case 2964:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      END_STATE();
    case 2965:
      ACCEPT_TOKEN(aux_sym__compress_level_token1);
      END_STATE();
    case 2966:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      END_STATE();
    case 2967:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      END_STATE();
    case 2968:
      ACCEPT_TOKEN(aux_sym__default_cert_level_token1);
      END_STATE();
    case 2969:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      END_STATE();
    case 2970:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      END_STATE();
    case 2971:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      END_STATE();
    case 2972:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token1);
      END_STATE();
    case 2973:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token2);
      END_STATE();
    case 2974:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      END_STATE();
    case 2975:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 2976:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead == 'u') ADVANCE(2023);
      END_STATE();
    case 2977:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      END_STATE();
    case 2978:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      END_STATE();
    case 2979:
      ACCEPT_TOKEN(sym__key_locate_value);
      END_STATE();
    case 2980:
      ACCEPT_TOKEN(sym__key_locate_value);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 's') ADVANCE(302);
      END_STATE();
    case 2981:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      END_STATE();
    case 2982:
      ACCEPT_TOKEN(sym__keyid_format_value);
      END_STATE();
    case 2983:
      ACCEPT_TOKEN(anon_sym_keyserver);
      END_STATE();
    case 2984:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      END_STATE();
    case 2985:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      END_STATE();
    case 2986:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      END_STATE();
    case 2987:
      ACCEPT_TOKEN(sym__tofu_policy_value);
      END_STATE();
    case 2988:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      END_STATE();
    case 2989:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      END_STATE();
    case 2990:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      END_STATE();
    case 2991:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      END_STATE();
    case 2992:
      ACCEPT_TOKEN(anon_sym_recipient);
      if (lookahead == '-') ADVANCE(1112);
      END_STATE();
    case 2993:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient);
      if (lookahead == '-') ADVANCE(1117);
      END_STATE();
    case 2994:
      ACCEPT_TOKEN(anon_sym_recipient_DASHfile);
      END_STATE();
    case 2995:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient_DASHfile);
      END_STATE();
    case 2996:
      ACCEPT_TOKEN(anon_sym_encrypt_DASHto);
      END_STATE();
    case 2997:
      ACCEPT_TOKEN(anon_sym_hidden_DASHencrypt_DASHto);
      END_STATE();
    case 2998:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 2999:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 3000:
      ACCEPT_TOKEN(anon_sym_ungroup);
      END_STATE();
    case 3001:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      END_STATE();
    case 3002:
      ACCEPT_TOKEN(anon_sym_sender);
      END_STATE();
    case 3003:
      ACCEPT_TOKEN(anon_sym_try_DASHsecret_DASHname);
      END_STATE();
    case 3004:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 3005:
      ACCEPT_TOKEN(anon_sym_max_DASHoutput);
      END_STATE();
    case 3006:
      ACCEPT_TOKEN(anon_sym_chunk_DASHsize);
      END_STATE();
    case 3007:
      ACCEPT_TOKEN(anon_sym_input_DASHsize_DASHhint);
      END_STATE();
    case 3008:
      ACCEPT_TOKEN(anon_sym_key_DASHorigin);
      END_STATE();
    case 3009:
      ACCEPT_TOKEN(sym__key_origin_value);
      END_STATE();
    case 3010:
      ACCEPT_TOKEN(sym__key_origin_value);
      if (lookahead == '-') ADVANCE(2035);
      END_STATE();
    case 3011:
      ACCEPT_TOKEN(anon_sym_import_DASHoptions);
      END_STATE();
    case 3012:
      ACCEPT_TOKEN(sym__import_parameter);
      END_STATE();
    case 3013:
      ACCEPT_TOKEN(anon_sym_export_DASHoptions);
      END_STATE();
    case 3014:
      ACCEPT_TOKEN(sym__export_parameter);
      END_STATE();
    case 3015:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      END_STATE();
    case 3016:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      END_STATE();
    case 3017:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      END_STATE();
    case 3018:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      END_STATE();
    case 3019:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      END_STATE();
    case 3020:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      END_STATE();
    case 3021:
      ACCEPT_TOKEN(aux_sym__s2k_mode_token1);
      END_STATE();
    case 3022:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      END_STATE();
    case 3023:
      ACCEPT_TOKEN(anon_sym_compliance);
      END_STATE();
    case 3024:
      ACCEPT_TOKEN(sym__compliance_value);
      END_STATE();
    case 3025:
      ACCEPT_TOKEN(sym__compliance_value);
      if (lookahead == 'b') ADVANCE(1296);
      END_STATE();
    case 3026:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      END_STATE();
    case 3027:
      ACCEPT_TOKEN(sym__require_compliance);
      END_STATE();
    case 3028:
      ACCEPT_TOKEN(anon_sym_debug_DASHlevel);
      END_STATE();
    case 3029:
      ACCEPT_TOKEN(sym__debug_level_value);
      END_STATE();
    case 3030:
      ACCEPT_TOKEN(anon_sym_debug);
      if (lookahead == '-') ADVANCE(424);
      END_STATE();
    case 3031:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      END_STATE();
    case 3032:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'a') ADVANCE(3033);
      if (lookahead == 'l') ADVANCE(1882);
      if (lookahead == 'r') ADVANCE(2731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 3033:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'c') ADVANCE(3034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 3034:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'h') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3041);
      END_STATE();
    case 3035:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'i') ADVANCE(1588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 3036:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'x') ADVANCE(1548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 3037:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'x') ADVANCE(2535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 3038:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3031);
      END_STATE();
    case 3039:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3038);
      END_STATE();
    case 3040:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3039);
      END_STATE();
    case 3041:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3040);
      END_STATE();
    case 3042:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3041);
      END_STATE();
    case 3043:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 3044:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 3045:
      ACCEPT_TOKEN(sym__debug_flag_value);
      END_STATE();
    case 3046:
      ACCEPT_TOKEN(anon_sym_debug_DASHset_DASHiobuf_DASHsize);
      END_STATE();
    case 3047:
      ACCEPT_TOKEN(anon_sym_faked_DASHsystem_DASHtime);
      END_STATE();
    case 3048:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3049:
      ACCEPT_TOKEN(anon_sym_status_DASHfd);
      END_STATE();
    case 3050:
      ACCEPT_TOKEN(anon_sym_status_DASHfile);
      END_STATE();
    case 3051:
      ACCEPT_TOKEN(anon_sym_logger_DASHfd);
      END_STATE();
    case 3052:
      ACCEPT_TOKEN(anon_sym_logger_DASHfile);
      END_STATE();
    case 3053:
      ACCEPT_TOKEN(anon_sym_log_DASHfile);
      END_STATE();
    case 3054:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 3055:
      ACCEPT_TOKEN(anon_sym_sig_DASHnotation);
      END_STATE();
    case 3056:
      ACCEPT_TOKEN(anon_sym_cert_DASHnotation);
      END_STATE();
    case 3057:
      ACCEPT_TOKEN(anon_sym_set_DASHnotation);
      END_STATE();
    case 3058:
      ACCEPT_TOKEN(aux_sym__notation_format_token1);
      END_STATE();
    case 3059:
      ACCEPT_TOKEN(anon_sym_known_DASHnotation);
      END_STATE();
    case 3060:
      ACCEPT_TOKEN(anon_sym_sig_DASHpolicy_DASHurl);
      END_STATE();
    case 3061:
      ACCEPT_TOKEN(anon_sym_cert_DASHpolicy_DASHurl);
      END_STATE();
    case 3062:
      ACCEPT_TOKEN(anon_sym_set_DASHpolicy_DASHurl);
      END_STATE();
    case 3063:
      ACCEPT_TOKEN(anon_sym_sig_DASHkeyserver_DASHurl);
      END_STATE();
    case 3064:
      ACCEPT_TOKEN(anon_sym_set_DASHfilename);
      END_STATE();
    case 3065:
      ACCEPT_TOKEN(anon_sym_cipher_DASHalgo);
      END_STATE();
    case 3066:
      ACCEPT_TOKEN(anon_sym_digest_DASHalgo);
      END_STATE();
    case 3067:
      ACCEPT_TOKEN(anon_sym_compress_DASHalgo);
      END_STATE();
    case 3068:
      ACCEPT_TOKEN(anon_sym_cert_DASHdigest_DASHalgo);
      END_STATE();
    case 3069:
      ACCEPT_TOKEN(anon_sym_disable_DASHcipher_DASHalgo);
      END_STATE();
    case 3070:
      ACCEPT_TOKEN(anon_sym_disable_DASHpubkey_DASHalgo);
      END_STATE();
    case 3071:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHrepeat);
      END_STATE();
    case 3072:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfd);
      END_STATE();
    case 3073:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfile);
      END_STATE();
    case 3074:
      ACCEPT_TOKEN(anon_sym_passphrase);
      if (lookahead == '-') ADVANCE(1088);
      END_STATE();
    case 3075:
      ACCEPT_TOKEN(anon_sym_pinentry_DASHmode);
      END_STATE();
    case 3076:
      ACCEPT_TOKEN(sym__pinentry_mode_value);
      END_STATE();
    case 3077:
      ACCEPT_TOKEN(anon_sym_request_DASHorigin);
      END_STATE();
    case 3078:
      ACCEPT_TOKEN(sym__request_origin_value);
      END_STATE();
    case 3079:
      ACCEPT_TOKEN(anon_sym_command_DASHfd);
      END_STATE();
    case 3080:
      ACCEPT_TOKEN(anon_sym_command_DASHfile);
      END_STATE();
    case 3081:
      ACCEPT_TOKEN(anon_sym_weak_DASHdigest);
      END_STATE();
    case 3082:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey);
      if (lookahead == '-') ADVANCE(1093);
      END_STATE();
    case 3083:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey_DASHfd);
      END_STATE();
    case 3084:
      ACCEPT_TOKEN(anon_sym_default_DASHsig_DASHexpire);
      END_STATE();
    case 3085:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHexpire);
      END_STATE();
    case 3086:
      ACCEPT_TOKEN(anon_sym_default_DASHnew_DASHkey_DASHalgo);
      END_STATE();
    case 3087:
      ACCEPT_TOKEN(sym__new_key_algo);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3087);
      END_STATE();
    case 3088:
      ACCEPT_TOKEN(anon_sym_default_DASHpreference_DASHlist);
      END_STATE();
    case 3089:
      ACCEPT_TOKEN(anon_sym_default_DASHkeyserver_DASHurl);
      END_STATE();
    case 3090:
      ACCEPT_TOKEN(anon_sym_chuid);
      END_STATE();
    case 3091:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 3092:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3091);
      END_STATE();
    case 3093:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3092);
      END_STATE();
    case 3094:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3093);
      END_STATE();
    case 3095:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3094);
      END_STATE();
    case 3096:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3095);
      END_STATE();
    case 3097:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3096);
      END_STATE();
    case 3098:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3097);
      END_STATE();
    case 3099:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3098);
      END_STATE();
    case 3100:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3099);
      END_STATE();
    case 3101:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3100);
      END_STATE();
    case 3102:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3101);
      END_STATE();
    case 3103:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3102);
      END_STATE();
    case 3104:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3103);
      END_STATE();
    case 3105:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3104);
      END_STATE();
    case 3106:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3105);
      END_STATE();
    case 3107:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3106);
      END_STATE();
    case 3108:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3107);
      END_STATE();
    case 3109:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3108);
      END_STATE();
    case 3110:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3109);
      END_STATE();
    case 3111:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3110);
      END_STATE();
    case 3112:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3111);
      END_STATE();
    case 3113:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3112);
      END_STATE();
    case 3114:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3113);
      END_STATE();
    case 3115:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3114);
      END_STATE();
    case 3116:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3115);
      END_STATE();
    case 3117:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3116);
      END_STATE();
    case 3118:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3117);
      END_STATE();
    case 3119:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3118);
      END_STATE();
    case 3120:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3119);
      END_STATE();
    case 3121:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3120);
      END_STATE();
    case 3122:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3121);
      END_STATE();
    case 3123:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3122);
      END_STATE();
    case 3124:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(2809);
      if (lookahead == '.') ADVANCE(2781);
      if (lookahead == ':') ADVANCE(2782);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3124);
      END_STATE();
    case 3125:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3125);
      END_STATE();
    case 3126:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'T') ADVANCE(2800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3136);
      END_STATE();
    case 3127:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3141);
      END_STATE();
    case 3128:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3126);
      END_STATE();
    case 3129:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2799);
      END_STATE();
    case 3130:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3128);
      END_STATE();
    case 3131:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3130);
      END_STATE();
    case 3132:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3131);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3132);
      END_STATE();
    case 3134:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3133);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3134);
      END_STATE();
    case 3136:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3136);
      END_STATE();
    case 3137:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3141);
      END_STATE();
    case 3138:
      ACCEPT_TOKEN(sym_iso_time);
      END_STATE();
    case 3139:
      ACCEPT_TOKEN(sym_expire_time);
      END_STATE();
    case 3140:
      ACCEPT_TOKEN(sym_expire_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2788);
      END_STATE();
    case 3141:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3141);
      END_STATE();
    case 3142:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3142);
      END_STATE();
    case 3143:
      ACCEPT_TOKEN(sym__pubkey_algo_value);
      END_STATE();
    case 3144:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      END_STATE();
    case 3145:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      if (lookahead == '1') ADVANCE(300);
      if (lookahead == '2') ADVANCE(283);
      END_STATE();
    case 3146:
      ACCEPT_TOKEN(sym__hash_algo_value);
      END_STATE();
    case 3147:
      ACCEPT_TOKEN(sym__compression_algo_value);
      END_STATE();
    case 3148:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2810},
  [2] = {.lex_state = 2810},
  [3] = {.lex_state = 2810},
  [4] = {.lex_state = 2810},
  [5] = {.lex_state = 2810},
  [6] = {.lex_state = 2810},
  [7] = {.lex_state = 2810},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 2810},
  [10] = {.lex_state = 2810},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 2810},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2810},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 2810},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 2810},
  [62] = {.lex_state = 2810},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 2810},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 2810},
  [96] = {.lex_state = 2810},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 13},
  [101] = {.lex_state = 13},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 2810},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 13},
  [108] = {.lex_state = 2810},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 13},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 2810},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 16},
  [126] = {.lex_state = 2810},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 2810},
  [129] = {.lex_state = 2810},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 2810},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 2810},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 2810},
  [148] = {.lex_state = 2810},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 2810},
  [151] = {.lex_state = 256},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 2810},
  [154] = {.lex_state = 2810},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 403},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 2810},
  [169] = {.lex_state = 2810},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 2810},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 2810},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 2810},
  [188] = {.lex_state = 6},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 256},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 2810},
  [199] = {.lex_state = 2810},
  [200] = {.lex_state = 403},
  [201] = {.lex_state = 403},
  [202] = {.lex_state = 64},
  [203] = {.lex_state = 2810},
  [204] = {.lex_state = 64},
  [205] = {.lex_state = 2810},
  [206] = {.lex_state = 2810},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 2810},
  [209] = {.lex_state = 2810},
  [210] = {.lex_state = 2810},
  [211] = {.lex_state = 2810},
  [212] = {.lex_state = 2810},
  [213] = {.lex_state = 2810},
  [214] = {.lex_state = 2810},
  [215] = {.lex_state = 2810},
  [216] = {.lex_state = 2810},
  [217] = {.lex_state = 2810},
  [218] = {.lex_state = 2810},
  [219] = {.lex_state = 2810},
  [220] = {.lex_state = 2810},
  [221] = {.lex_state = 2810},
  [222] = {.lex_state = 2810},
  [223] = {.lex_state = 2810},
  [224] = {.lex_state = 2810},
  [225] = {.lex_state = 2810},
  [226] = {.lex_state = 2810},
  [227] = {.lex_state = 2810},
  [228] = {.lex_state = 2810},
  [229] = {.lex_state = 2810},
  [230] = {.lex_state = 2810},
  [231] = {.lex_state = 2810},
  [232] = {.lex_state = 2810},
  [233] = {.lex_state = 2810},
  [234] = {.lex_state = 2810},
  [235] = {.lex_state = 2810},
  [236] = {.lex_state = 2810},
  [237] = {.lex_state = 2810},
  [238] = {.lex_state = 2810},
  [239] = {.lex_state = 2810},
  [240] = {.lex_state = 2810},
  [241] = {.lex_state = 2810},
  [242] = {.lex_state = 2810},
  [243] = {.lex_state = 2810},
  [244] = {.lex_state = 2810},
  [245] = {.lex_state = 2810},
  [246] = {.lex_state = 2810},
  [247] = {.lex_state = 2810},
  [248] = {.lex_state = 2810},
  [249] = {.lex_state = 2810},
  [250] = {.lex_state = 2810},
  [251] = {.lex_state = 2810},
  [252] = {.lex_state = 2810},
  [253] = {.lex_state = 2810},
  [254] = {.lex_state = 2810},
  [255] = {.lex_state = 2810},
  [256] = {.lex_state = 2810},
  [257] = {.lex_state = 2810},
  [258] = {.lex_state = 2810},
  [259] = {.lex_state = 2810},
  [260] = {.lex_state = 2810},
  [261] = {.lex_state = 2810},
  [262] = {.lex_state = 2810},
  [263] = {.lex_state = 2810},
  [264] = {.lex_state = 2810},
  [265] = {.lex_state = 2810},
  [266] = {.lex_state = 2810},
  [267] = {.lex_state = 2810},
  [268] = {.lex_state = 2810},
  [269] = {.lex_state = 2810},
  [270] = {.lex_state = 2810},
  [271] = {.lex_state = 2810},
  [272] = {.lex_state = 2810},
  [273] = {.lex_state = 2810},
  [274] = {.lex_state = 2810},
  [275] = {.lex_state = 2810},
  [276] = {.lex_state = 7},
  [277] = {.lex_state = 2810},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 2810},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 2810},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 2810},
  [286] = {.lex_state = 2810},
  [287] = {.lex_state = 2810},
  [288] = {.lex_state = 2810},
  [289] = {.lex_state = 2810},
  [290] = {.lex_state = 2810},
  [291] = {.lex_state = 2810},
  [292] = {.lex_state = 2810},
  [293] = {.lex_state = 2810},
  [294] = {.lex_state = 2810},
  [295] = {.lex_state = 2810},
  [296] = {.lex_state = 2810},
  [297] = {.lex_state = 2810},
  [298] = {.lex_state = 2810},
  [299] = {.lex_state = 2810},
  [300] = {.lex_state = 2810},
  [301] = {.lex_state = 2810},
  [302] = {.lex_state = 2810},
  [303] = {.lex_state = 2810},
  [304] = {.lex_state = 2810},
  [305] = {.lex_state = 2810},
  [306] = {.lex_state = 2810},
  [307] = {.lex_state = 2810},
  [308] = {.lex_state = 2810},
  [309] = {.lex_state = 2810},
  [310] = {.lex_state = 2810},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 2810},
  [313] = {.lex_state = 2810},
  [314] = {.lex_state = 2810},
  [315] = {.lex_state = 2810},
  [316] = {.lex_state = 2810},
  [317] = {.lex_state = 2810},
  [318] = {.lex_state = 2810},
  [319] = {.lex_state = 2810},
  [320] = {.lex_state = 2810},
  [321] = {.lex_state = 2810},
  [322] = {.lex_state = 2810},
  [323] = {.lex_state = 2810},
  [324] = {.lex_state = 2810},
  [325] = {.lex_state = 2810},
  [326] = {.lex_state = 2810},
  [327] = {.lex_state = 2810},
  [328] = {.lex_state = 2810},
  [329] = {.lex_state = 2810},
  [330] = {.lex_state = 2810},
  [331] = {.lex_state = 2810},
  [332] = {.lex_state = 2810},
  [333] = {.lex_state = 2810},
  [334] = {.lex_state = 2810},
  [335] = {.lex_state = 2810},
  [336] = {.lex_state = 2810},
  [337] = {.lex_state = 2810},
  [338] = {.lex_state = 2810},
  [339] = {.lex_state = 2810},
  [340] = {.lex_state = 2810},
  [341] = {.lex_state = 2810},
  [342] = {.lex_state = 2810},
  [343] = {.lex_state = 2810},
  [344] = {.lex_state = 2810},
  [345] = {.lex_state = 2810},
  [346] = {.lex_state = 2810},
  [347] = {.lex_state = 2810},
  [348] = {.lex_state = 2810},
  [349] = {.lex_state = 2810},
  [350] = {.lex_state = 2810},
  [351] = {.lex_state = 2810},
  [352] = {.lex_state = 2810},
  [353] = {.lex_state = 2810},
  [354] = {.lex_state = 2810},
  [355] = {.lex_state = 2810},
  [356] = {.lex_state = 2810},
  [357] = {.lex_state = 2810},
  [358] = {.lex_state = 2810},
  [359] = {.lex_state = 2810},
  [360] = {.lex_state = 2810},
  [361] = {.lex_state = 2810},
  [362] = {.lex_state = 2810},
  [363] = {.lex_state = 2810},
  [364] = {.lex_state = 2810},
  [365] = {.lex_state = 2810},
  [366] = {.lex_state = 2810},
  [367] = {.lex_state = 2810},
  [368] = {.lex_state = 2810},
  [369] = {.lex_state = 2810},
  [370] = {.lex_state = 2810},
  [371] = {.lex_state = 2810},
  [372] = {.lex_state = 2810},
  [373] = {.lex_state = 2810},
  [374] = {.lex_state = 2810},
  [375] = {.lex_state = 2810},
  [376] = {.lex_state = 2810},
  [377] = {.lex_state = 2810},
  [378] = {.lex_state = 2810},
  [379] = {.lex_state = 2810},
  [380] = {.lex_state = 2810},
  [381] = {.lex_state = 2810},
  [382] = {.lex_state = 2810},
  [383] = {.lex_state = 2810},
  [384] = {.lex_state = 2810},
  [385] = {.lex_state = 2810},
  [386] = {.lex_state = 2810},
  [387] = {.lex_state = 2810},
  [388] = {.lex_state = 2810},
  [389] = {.lex_state = 2810},
  [390] = {.lex_state = 2810},
  [391] = {.lex_state = 2810},
  [392] = {.lex_state = 2810},
  [393] = {.lex_state = 2810},
  [394] = {.lex_state = 2810},
  [395] = {.lex_state = 2810},
  [396] = {.lex_state = 2810},
  [397] = {.lex_state = 2810},
  [398] = {.lex_state = 2810},
  [399] = {.lex_state = 2810},
  [400] = {.lex_state = 2810},
  [401] = {.lex_state = 2810},
  [402] = {.lex_state = 2810},
  [403] = {.lex_state = 2810},
  [404] = {.lex_state = 2810},
  [405] = {.lex_state = 2810},
  [406] = {.lex_state = 2810},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__command_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__command_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__command_token3] = ACTIONS(1),
    [aux_sym__command_format_token1] = ACTIONS(1),
    [aux_sym__default_cert_level_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__s2k_mode_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(228),
    [sym_option] = STATE(253),
    [sym__default_key] = STATE(279),
    [sym__list_options] = STATE(279),
    [sym__verify_options] = STATE(279),
    [sym__photo_viewer] = STATE(279),
    [sym__exec_path] = STATE(279),
    [sym__keyring] = STATE(279),
    [sym__primary_keyring] = STATE(279),
    [sym__trustdb_name] = STATE(279),
    [sym__display_charset] = STATE(279),
    [sym__compress_level] = STATE(279),
    [sym__bzip2_compress_level] = STATE(279),
    [sym__default_cert_level] = STATE(279),
    [sym__min_cert_level] = STATE(279),
    [sym__trusted_key] = STATE(279),
    [sym__add_desig_revoker] = STATE(279),
    [sym__trust_model] = STATE(279),
    [sym__assert_signer] = STATE(279),
    [sym__auto_key_locate] = STATE(213),
    [sym__keyid_format] = STATE(279),
    [sym__keyserver] = STATE(279),
    [sym__completes_needed] = STATE(279),
    [sym__marginals_needed] = STATE(279),
    [sym__tofu_default_policy] = STATE(279),
    [sym__max_cert_depth] = STATE(279),
    [sym__agent_program] = STATE(279),
    [sym__dirmngr_program] = STATE(279),
    [sym__limit_card_insert_tries] = STATE(279),
    [sym__recipient] = STATE(279),
    [sym__hidden_recipient] = STATE(279),
    [sym__recipient_file] = STATE(279),
    [sym__hidden_recipient_file] = STATE(279),
    [sym__encrypt_to] = STATE(279),
    [sym__hidden_encrypt_to] = STATE(279),
    [sym__group] = STATE(153),
    [sym__ungroup] = STATE(279),
    [sym__local_user] = STATE(279),
    [sym__sender] = STATE(279),
    [sym__try_secret_name] = STATE(279),
    [sym__output] = STATE(279),
    [sym__max_output] = STATE(279),
    [sym__chunk_size] = STATE(279),
    [sym__input_size_hint] = STATE(279),
    [sym__key_origin] = STATE(279),
    [sym__import_options] = STATE(279),
    [sym__export_options] = STATE(279),
    [sym__personal_cipher_preferences] = STATE(279),
    [sym__personal_digest_preferences] = STATE(279),
    [sym__personal_compress_preferences] = STATE(279),
    [sym__s2k_cipher_algo] = STATE(279),
    [sym__s2k_digest_algo] = STATE(279),
    [sym__s2k_mode] = STATE(279),
    [sym__s2k_count] = STATE(279),
    [sym__compliance] = STATE(279),
    [sym__min_rsa_length] = STATE(279),
    [sym__debug_level] = STATE(279),
    [sym__debug] = STATE(279),
    [sym__debug_set_iobuf_size] = STATE(279),
    [sym__faked_system_time] = STATE(279),
    [sym__status_fd] = STATE(279),
    [sym__status_file] = STATE(279),
    [sym__logger_fd] = STATE(279),
    [sym__logger_file] = STATE(279),
    [sym__comment] = STATE(279),
    [sym__sig_notation] = STATE(212),
    [sym__cert_notation] = STATE(211),
    [sym__set_notation] = STATE(210),
    [sym__known_notation] = STATE(279),
    [sym__sig_policy_url] = STATE(279),
    [sym__cert_policy_url] = STATE(279),
    [sym__set_policy_url] = STATE(279),
    [sym__sig_keyserver_url] = STATE(279),
    [sym__set_filename] = STATE(279),
    [sym__cipher_algo] = STATE(279),
    [sym__digest_algo] = STATE(279),
    [sym__compress_algo] = STATE(279),
    [sym__cert_digest_algo] = STATE(279),
    [sym__disable_cipher_algo] = STATE(279),
    [sym__disable_pubkey_algo] = STATE(279),
    [sym__passphrase_repeat] = STATE(279),
    [sym__passphrase_fd] = STATE(279),
    [sym__passphrase_file] = STATE(279),
    [sym__passphrase] = STATE(279),
    [sym__pinentry_mode] = STATE(279),
    [sym__request_origin] = STATE(279),
    [sym__command_fd] = STATE(279),
    [sym__command_file] = STATE(279),
    [sym__weak_digest] = STATE(279),
    [sym__override_session_key] = STATE(279),
    [sym__override_session_key_fd] = STATE(279),
    [sym__default_sig_expire] = STATE(279),
    [sym__default_cert_expire] = STATE(279),
    [sym__default_new_key_algo] = STATE(279),
    [sym__default_preference_list] = STATE(279),
    [sym__default_keyserver_url] = STATE(279),
    [sym__chuid] = STATE(279),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_config_token1] = ACTIONS(7),
    [anon_sym_default_DASHrecipient] = ACTIONS(9),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(11),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(11),
    [anon_sym_verbose] = ACTIONS(11),
    [anon_sym_no_DASHtty] = ACTIONS(11),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(11),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(11),
    [anon_sym_enable_DASHdsa2] = ACTIONS(11),
    [anon_sym_disable_DASHdsa2] = ACTIONS(11),
    [anon_sym_no_DASHcompress] = ACTIONS(11),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(11),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(11),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(11),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(11),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(11),
    [anon_sym_always_DASHtrust] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(11),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(11),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(11),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(11),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(11),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(11),
    [anon_sym_no_DASHautostart] = ACTIONS(11),
    [anon_sym_lock_DASHonce] = ACTIONS(11),
    [anon_sym_lock_DASHmultiple] = ACTIONS(11),
    [anon_sym_lock_DASHnever] = ACTIONS(11),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(11),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(11),
    [anon_sym_no_DASHgreeting] = ACTIONS(11),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(11),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(11),
    [anon_sym_require_DASHsecmem] = ACTIONS(11),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(11),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(11),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(11),
    [anon_sym_expert] = ACTIONS(11),
    [anon_sym_no_DASHexpert] = ACTIONS(11),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(11),
    [anon_sym_no_DASHgroups] = ACTIONS(11),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(11),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(11),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(11),
    [anon_sym_armor] = ACTIONS(11),
    [anon_sym_no_DASHarmor] = ACTIONS(11),
    [anon_sym_with_DASHcolons] = ACTIONS(11),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(11),
    [anon_sym_with_DASHfingerprint] = ACTIONS(11),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(11),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(11),
    [anon_sym_with_DASHkeygrip] = ACTIONS(11),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(11),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(11),
    [anon_sym_with_DASHsecret] = ACTIONS(11),
    [anon_sym_textmode] = ACTIONS(11),
    [anon_sym_no_DASHtextmode] = ACTIONS(11),
    [anon_sym_force_DASHocb] = ACTIONS(11),
    [anon_sym_force_DASHaead] = ACTIONS(11),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(11),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(11),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(11),
    [anon_sym_gnupg] = ACTIONS(11),
    [anon_sym_openpgp] = ACTIONS(11),
    [anon_sym_rfc4880] = ACTIONS(9),
    [anon_sym_rfc4880bis] = ACTIONS(11),
    [anon_sym_rfc2440] = ACTIONS(11),
    [anon_sym_pgp7] = ACTIONS(11),
    [anon_sym_pgp8] = ACTIONS(11),
    [anon_sym_list_DASHonly] = ACTIONS(11),
    [anon_sym_interactive] = ACTIONS(11),
    [anon_sym_debug_DASHall] = ACTIONS(9),
    [anon_sym_debug_DASHiolbf] = ACTIONS(11),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(11),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(11),
    [anon_sym_full_DASHtimestrings] = ACTIONS(11),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(11),
    [anon_sym_log_DASHtime] = ACTIONS(11),
    [anon_sym_no_DASHcomments] = ACTIONS(11),
    [anon_sym_emit_DASHversion] = ACTIONS(11),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(11),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(11),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(11),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(11),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(11),
    [anon_sym_throw_DASHkeyids] = ACTIONS(11),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(11),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(11),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(11),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(11),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(11),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(11),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(11),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(11),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(11),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(11),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(11),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(11),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(11),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(11),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(11),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(11),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(11),
    [anon_sym_no_DASHkeyring] = ACTIONS(11),
    [anon_sym_skip_DASHverify] = ACTIONS(11),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(11),
    [anon_sym_list_DASHsignatures] = ACTIONS(11),
    [anon_sym_list_DASHsigs] = ACTIONS(11),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(11),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(11),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(11),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(11),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(11),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(11),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(11),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(11),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(11),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(11),
    [anon_sym_default_DASHkey] = ACTIONS(13),
    [anon_sym_list_DASHoptions] = ACTIONS(15),
    [anon_sym_verify_DASHoptions] = ACTIONS(17),
    [anon_sym_photo_DASHviewer] = ACTIONS(19),
    [anon_sym_exec_DASHpath] = ACTIONS(21),
    [anon_sym_keyring] = ACTIONS(23),
    [anon_sym_primary_DASHkeyring] = ACTIONS(25),
    [anon_sym_trustdb_DASHname] = ACTIONS(27),
    [anon_sym_display_DASHcharset] = ACTIONS(29),
    [sym__utf8_strings] = ACTIONS(11),
    [sym__no_utf8_strings] = ACTIONS(11),
    [anon_sym_compress_DASHlevel] = ACTIONS(31),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(33),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(37),
    [anon_sym_trusted_DASHkey] = ACTIONS(39),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(41),
    [anon_sym_trust_DASHmodel] = ACTIONS(43),
    [anon_sym_assert_DASHsigner] = ACTIONS(45),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(47),
    [anon_sym_keyid_DASHformat] = ACTIONS(49),
    [anon_sym_keyserver] = ACTIONS(51),
    [anon_sym_completes_DASHneeded] = ACTIONS(53),
    [anon_sym_marginals_DASHneeded] = ACTIONS(55),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(57),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(59),
    [anon_sym_agent_DASHprogram] = ACTIONS(61),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(63),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(65),
    [anon_sym_recipient] = ACTIONS(67),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(69),
    [anon_sym_recipient_DASHfile] = ACTIONS(71),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(73),
    [anon_sym_encrypt_DASHto] = ACTIONS(75),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(77),
    [anon_sym_group] = ACTIONS(79),
    [anon_sym_ungroup] = ACTIONS(81),
    [anon_sym_local_DASHuser] = ACTIONS(83),
    [anon_sym_sender] = ACTIONS(85),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(87),
    [anon_sym_output] = ACTIONS(89),
    [anon_sym_max_DASHoutput] = ACTIONS(91),
    [anon_sym_chunk_DASHsize] = ACTIONS(93),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(95),
    [anon_sym_key_DASHorigin] = ACTIONS(97),
    [anon_sym_import_DASHoptions] = ACTIONS(99),
    [anon_sym_export_DASHoptions] = ACTIONS(101),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(103),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(105),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(107),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(109),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(111),
    [anon_sym_s2k_DASHmode] = ACTIONS(113),
    [anon_sym_s2k_DASHcount] = ACTIONS(115),
    [anon_sym_compliance] = ACTIONS(117),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(119),
    [sym__require_compliance] = ACTIONS(11),
    [anon_sym_debug_DASHlevel] = ACTIONS(121),
    [anon_sym_debug] = ACTIONS(123),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(125),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(127),
    [anon_sym_status_DASHfd] = ACTIONS(129),
    [anon_sym_status_DASHfile] = ACTIONS(131),
    [anon_sym_logger_DASHfd] = ACTIONS(133),
    [anon_sym_logger_DASHfile] = ACTIONS(135),
    [anon_sym_log_DASHfile] = ACTIONS(135),
    [anon_sym_comment] = ACTIONS(137),
    [anon_sym_sig_DASHnotation] = ACTIONS(139),
    [anon_sym_cert_DASHnotation] = ACTIONS(141),
    [anon_sym_set_DASHnotation] = ACTIONS(143),
    [anon_sym_known_DASHnotation] = ACTIONS(145),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(147),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(149),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(151),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(153),
    [anon_sym_set_DASHfilename] = ACTIONS(155),
    [anon_sym_cipher_DASHalgo] = ACTIONS(157),
    [anon_sym_digest_DASHalgo] = ACTIONS(159),
    [anon_sym_compress_DASHalgo] = ACTIONS(161),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(163),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(165),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(167),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(169),
    [anon_sym_passphrase_DASHfd] = ACTIONS(171),
    [anon_sym_passphrase_DASHfile] = ACTIONS(173),
    [anon_sym_passphrase] = ACTIONS(175),
    [anon_sym_pinentry_DASHmode] = ACTIONS(177),
    [anon_sym_request_DASHorigin] = ACTIONS(179),
    [anon_sym_command_DASHfd] = ACTIONS(181),
    [anon_sym_command_DASHfile] = ACTIONS(183),
    [anon_sym_weak_DASHdigest] = ACTIONS(185),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(187),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(189),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(191),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(193),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(195),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(197),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(199),
    [anon_sym_chuid] = ACTIONS(201),
    [sym_comment] = ACTIONS(203),
    [sym__space] = ACTIONS(205),
  },
  [2] = {
    [sym_option] = STATE(253),
    [sym__default_key] = STATE(279),
    [sym__list_options] = STATE(279),
    [sym__verify_options] = STATE(279),
    [sym__photo_viewer] = STATE(279),
    [sym__exec_path] = STATE(279),
    [sym__keyring] = STATE(279),
    [sym__primary_keyring] = STATE(279),
    [sym__trustdb_name] = STATE(279),
    [sym__display_charset] = STATE(279),
    [sym__compress_level] = STATE(279),
    [sym__bzip2_compress_level] = STATE(279),
    [sym__default_cert_level] = STATE(279),
    [sym__min_cert_level] = STATE(279),
    [sym__trusted_key] = STATE(279),
    [sym__add_desig_revoker] = STATE(279),
    [sym__trust_model] = STATE(279),
    [sym__assert_signer] = STATE(279),
    [sym__auto_key_locate] = STATE(213),
    [sym__keyid_format] = STATE(279),
    [sym__keyserver] = STATE(279),
    [sym__completes_needed] = STATE(279),
    [sym__marginals_needed] = STATE(279),
    [sym__tofu_default_policy] = STATE(279),
    [sym__max_cert_depth] = STATE(279),
    [sym__agent_program] = STATE(279),
    [sym__dirmngr_program] = STATE(279),
    [sym__limit_card_insert_tries] = STATE(279),
    [sym__recipient] = STATE(279),
    [sym__hidden_recipient] = STATE(279),
    [sym__recipient_file] = STATE(279),
    [sym__hidden_recipient_file] = STATE(279),
    [sym__encrypt_to] = STATE(279),
    [sym__hidden_encrypt_to] = STATE(279),
    [sym__group] = STATE(153),
    [sym__ungroup] = STATE(279),
    [sym__local_user] = STATE(279),
    [sym__sender] = STATE(279),
    [sym__try_secret_name] = STATE(279),
    [sym__output] = STATE(279),
    [sym__max_output] = STATE(279),
    [sym__chunk_size] = STATE(279),
    [sym__input_size_hint] = STATE(279),
    [sym__key_origin] = STATE(279),
    [sym__import_options] = STATE(279),
    [sym__export_options] = STATE(279),
    [sym__personal_cipher_preferences] = STATE(279),
    [sym__personal_digest_preferences] = STATE(279),
    [sym__personal_compress_preferences] = STATE(279),
    [sym__s2k_cipher_algo] = STATE(279),
    [sym__s2k_digest_algo] = STATE(279),
    [sym__s2k_mode] = STATE(279),
    [sym__s2k_count] = STATE(279),
    [sym__compliance] = STATE(279),
    [sym__min_rsa_length] = STATE(279),
    [sym__debug_level] = STATE(279),
    [sym__debug] = STATE(279),
    [sym__debug_set_iobuf_size] = STATE(279),
    [sym__faked_system_time] = STATE(279),
    [sym__status_fd] = STATE(279),
    [sym__status_file] = STATE(279),
    [sym__logger_fd] = STATE(279),
    [sym__logger_file] = STATE(279),
    [sym__comment] = STATE(279),
    [sym__sig_notation] = STATE(212),
    [sym__cert_notation] = STATE(211),
    [sym__set_notation] = STATE(210),
    [sym__known_notation] = STATE(279),
    [sym__sig_policy_url] = STATE(279),
    [sym__cert_policy_url] = STATE(279),
    [sym__set_policy_url] = STATE(279),
    [sym__sig_keyserver_url] = STATE(279),
    [sym__set_filename] = STATE(279),
    [sym__cipher_algo] = STATE(279),
    [sym__digest_algo] = STATE(279),
    [sym__compress_algo] = STATE(279),
    [sym__cert_digest_algo] = STATE(279),
    [sym__disable_cipher_algo] = STATE(279),
    [sym__disable_pubkey_algo] = STATE(279),
    [sym__passphrase_repeat] = STATE(279),
    [sym__passphrase_fd] = STATE(279),
    [sym__passphrase_file] = STATE(279),
    [sym__passphrase] = STATE(279),
    [sym__pinentry_mode] = STATE(279),
    [sym__request_origin] = STATE(279),
    [sym__command_fd] = STATE(279),
    [sym__command_file] = STATE(279),
    [sym__weak_digest] = STATE(279),
    [sym__override_session_key] = STATE(279),
    [sym__override_session_key_fd] = STATE(279),
    [sym__default_sig_expire] = STATE(279),
    [sym__default_cert_expire] = STATE(279),
    [sym__default_new_key_algo] = STATE(279),
    [sym__default_preference_list] = STATE(279),
    [sym__default_keyserver_url] = STATE(279),
    [sym__chuid] = STATE(279),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_config_token1] = ACTIONS(209),
    [anon_sym_default_DASHrecipient] = ACTIONS(212),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(215),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(215),
    [anon_sym_verbose] = ACTIONS(215),
    [anon_sym_no_DASHtty] = ACTIONS(215),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(215),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(215),
    [anon_sym_enable_DASHdsa2] = ACTIONS(215),
    [anon_sym_disable_DASHdsa2] = ACTIONS(215),
    [anon_sym_no_DASHcompress] = ACTIONS(215),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(215),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(215),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(215),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(215),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(215),
    [anon_sym_always_DASHtrust] = ACTIONS(215),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(215),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(215),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(215),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(215),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(215),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(215),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(215),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(215),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(215),
    [anon_sym_no_DASHautostart] = ACTIONS(215),
    [anon_sym_lock_DASHonce] = ACTIONS(215),
    [anon_sym_lock_DASHmultiple] = ACTIONS(215),
    [anon_sym_lock_DASHnever] = ACTIONS(215),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(215),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(215),
    [anon_sym_no_DASHgreeting] = ACTIONS(215),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(215),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(215),
    [anon_sym_require_DASHsecmem] = ACTIONS(215),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(215),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(215),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(215),
    [anon_sym_expert] = ACTIONS(215),
    [anon_sym_no_DASHexpert] = ACTIONS(215),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(215),
    [anon_sym_no_DASHgroups] = ACTIONS(215),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(215),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(215),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(215),
    [anon_sym_armor] = ACTIONS(215),
    [anon_sym_no_DASHarmor] = ACTIONS(215),
    [anon_sym_with_DASHcolons] = ACTIONS(215),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(215),
    [anon_sym_with_DASHfingerprint] = ACTIONS(215),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(215),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(215),
    [anon_sym_with_DASHkeygrip] = ACTIONS(215),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(215),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(215),
    [anon_sym_with_DASHsecret] = ACTIONS(215),
    [anon_sym_textmode] = ACTIONS(215),
    [anon_sym_no_DASHtextmode] = ACTIONS(215),
    [anon_sym_force_DASHocb] = ACTIONS(215),
    [anon_sym_force_DASHaead] = ACTIONS(215),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(215),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(215),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(215),
    [anon_sym_gnupg] = ACTIONS(215),
    [anon_sym_openpgp] = ACTIONS(215),
    [anon_sym_rfc4880] = ACTIONS(212),
    [anon_sym_rfc4880bis] = ACTIONS(215),
    [anon_sym_rfc2440] = ACTIONS(215),
    [anon_sym_pgp7] = ACTIONS(215),
    [anon_sym_pgp8] = ACTIONS(215),
    [anon_sym_list_DASHonly] = ACTIONS(215),
    [anon_sym_interactive] = ACTIONS(215),
    [anon_sym_debug_DASHall] = ACTIONS(212),
    [anon_sym_debug_DASHiolbf] = ACTIONS(215),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(215),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(215),
    [anon_sym_full_DASHtimestrings] = ACTIONS(215),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(215),
    [anon_sym_log_DASHtime] = ACTIONS(215),
    [anon_sym_no_DASHcomments] = ACTIONS(215),
    [anon_sym_emit_DASHversion] = ACTIONS(215),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(215),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(215),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(215),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(215),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(215),
    [anon_sym_throw_DASHkeyids] = ACTIONS(215),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(215),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(215),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(215),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(215),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(215),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(215),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(215),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(215),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(215),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(215),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(215),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(215),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(215),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(215),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(215),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(215),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(215),
    [anon_sym_no_DASHkeyring] = ACTIONS(215),
    [anon_sym_skip_DASHverify] = ACTIONS(215),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(215),
    [anon_sym_list_DASHsignatures] = ACTIONS(215),
    [anon_sym_list_DASHsigs] = ACTIONS(215),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(215),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(215),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(215),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(215),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(215),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(215),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(215),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(215),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(215),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(215),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(215),
    [anon_sym_default_DASHkey] = ACTIONS(218),
    [anon_sym_list_DASHoptions] = ACTIONS(221),
    [anon_sym_verify_DASHoptions] = ACTIONS(224),
    [anon_sym_photo_DASHviewer] = ACTIONS(227),
    [anon_sym_exec_DASHpath] = ACTIONS(230),
    [anon_sym_keyring] = ACTIONS(233),
    [anon_sym_primary_DASHkeyring] = ACTIONS(236),
    [anon_sym_trustdb_DASHname] = ACTIONS(239),
    [anon_sym_display_DASHcharset] = ACTIONS(242),
    [sym__utf8_strings] = ACTIONS(215),
    [sym__no_utf8_strings] = ACTIONS(215),
    [anon_sym_compress_DASHlevel] = ACTIONS(245),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(248),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(251),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(254),
    [anon_sym_trusted_DASHkey] = ACTIONS(257),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(260),
    [anon_sym_trust_DASHmodel] = ACTIONS(263),
    [anon_sym_assert_DASHsigner] = ACTIONS(266),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(269),
    [anon_sym_keyid_DASHformat] = ACTIONS(272),
    [anon_sym_keyserver] = ACTIONS(275),
    [anon_sym_completes_DASHneeded] = ACTIONS(278),
    [anon_sym_marginals_DASHneeded] = ACTIONS(281),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(284),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(287),
    [anon_sym_agent_DASHprogram] = ACTIONS(290),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(293),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(296),
    [anon_sym_recipient] = ACTIONS(299),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(302),
    [anon_sym_recipient_DASHfile] = ACTIONS(305),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(308),
    [anon_sym_encrypt_DASHto] = ACTIONS(311),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(314),
    [anon_sym_group] = ACTIONS(317),
    [anon_sym_ungroup] = ACTIONS(320),
    [anon_sym_local_DASHuser] = ACTIONS(323),
    [anon_sym_sender] = ACTIONS(326),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(329),
    [anon_sym_output] = ACTIONS(332),
    [anon_sym_max_DASHoutput] = ACTIONS(335),
    [anon_sym_chunk_DASHsize] = ACTIONS(338),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(341),
    [anon_sym_key_DASHorigin] = ACTIONS(344),
    [anon_sym_import_DASHoptions] = ACTIONS(347),
    [anon_sym_export_DASHoptions] = ACTIONS(350),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(353),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(356),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(359),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(362),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(365),
    [anon_sym_s2k_DASHmode] = ACTIONS(368),
    [anon_sym_s2k_DASHcount] = ACTIONS(371),
    [anon_sym_compliance] = ACTIONS(374),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(377),
    [sym__require_compliance] = ACTIONS(215),
    [anon_sym_debug_DASHlevel] = ACTIONS(380),
    [anon_sym_debug] = ACTIONS(383),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(386),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(389),
    [anon_sym_status_DASHfd] = ACTIONS(392),
    [anon_sym_status_DASHfile] = ACTIONS(395),
    [anon_sym_logger_DASHfd] = ACTIONS(398),
    [anon_sym_logger_DASHfile] = ACTIONS(401),
    [anon_sym_log_DASHfile] = ACTIONS(401),
    [anon_sym_comment] = ACTIONS(404),
    [anon_sym_sig_DASHnotation] = ACTIONS(407),
    [anon_sym_cert_DASHnotation] = ACTIONS(410),
    [anon_sym_set_DASHnotation] = ACTIONS(413),
    [anon_sym_known_DASHnotation] = ACTIONS(416),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(419),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(422),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(425),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(428),
    [anon_sym_set_DASHfilename] = ACTIONS(431),
    [anon_sym_cipher_DASHalgo] = ACTIONS(434),
    [anon_sym_digest_DASHalgo] = ACTIONS(437),
    [anon_sym_compress_DASHalgo] = ACTIONS(440),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(443),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(446),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(449),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(452),
    [anon_sym_passphrase_DASHfd] = ACTIONS(455),
    [anon_sym_passphrase_DASHfile] = ACTIONS(458),
    [anon_sym_passphrase] = ACTIONS(461),
    [anon_sym_pinentry_DASHmode] = ACTIONS(464),
    [anon_sym_request_DASHorigin] = ACTIONS(467),
    [anon_sym_command_DASHfd] = ACTIONS(470),
    [anon_sym_command_DASHfile] = ACTIONS(473),
    [anon_sym_weak_DASHdigest] = ACTIONS(476),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(479),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(482),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(485),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(488),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(491),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(494),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(497),
    [anon_sym_chuid] = ACTIONS(500),
    [sym_comment] = ACTIONS(503),
    [sym__space] = ACTIONS(205),
  },
  [3] = {
    [sym_option] = STATE(253),
    [sym__default_key] = STATE(279),
    [sym__list_options] = STATE(279),
    [sym__verify_options] = STATE(279),
    [sym__photo_viewer] = STATE(279),
    [sym__exec_path] = STATE(279),
    [sym__keyring] = STATE(279),
    [sym__primary_keyring] = STATE(279),
    [sym__trustdb_name] = STATE(279),
    [sym__display_charset] = STATE(279),
    [sym__compress_level] = STATE(279),
    [sym__bzip2_compress_level] = STATE(279),
    [sym__default_cert_level] = STATE(279),
    [sym__min_cert_level] = STATE(279),
    [sym__trusted_key] = STATE(279),
    [sym__add_desig_revoker] = STATE(279),
    [sym__trust_model] = STATE(279),
    [sym__assert_signer] = STATE(279),
    [sym__auto_key_locate] = STATE(213),
    [sym__keyid_format] = STATE(279),
    [sym__keyserver] = STATE(279),
    [sym__completes_needed] = STATE(279),
    [sym__marginals_needed] = STATE(279),
    [sym__tofu_default_policy] = STATE(279),
    [sym__max_cert_depth] = STATE(279),
    [sym__agent_program] = STATE(279),
    [sym__dirmngr_program] = STATE(279),
    [sym__limit_card_insert_tries] = STATE(279),
    [sym__recipient] = STATE(279),
    [sym__hidden_recipient] = STATE(279),
    [sym__recipient_file] = STATE(279),
    [sym__hidden_recipient_file] = STATE(279),
    [sym__encrypt_to] = STATE(279),
    [sym__hidden_encrypt_to] = STATE(279),
    [sym__group] = STATE(153),
    [sym__ungroup] = STATE(279),
    [sym__local_user] = STATE(279),
    [sym__sender] = STATE(279),
    [sym__try_secret_name] = STATE(279),
    [sym__output] = STATE(279),
    [sym__max_output] = STATE(279),
    [sym__chunk_size] = STATE(279),
    [sym__input_size_hint] = STATE(279),
    [sym__key_origin] = STATE(279),
    [sym__import_options] = STATE(279),
    [sym__export_options] = STATE(279),
    [sym__personal_cipher_preferences] = STATE(279),
    [sym__personal_digest_preferences] = STATE(279),
    [sym__personal_compress_preferences] = STATE(279),
    [sym__s2k_cipher_algo] = STATE(279),
    [sym__s2k_digest_algo] = STATE(279),
    [sym__s2k_mode] = STATE(279),
    [sym__s2k_count] = STATE(279),
    [sym__compliance] = STATE(279),
    [sym__min_rsa_length] = STATE(279),
    [sym__debug_level] = STATE(279),
    [sym__debug] = STATE(279),
    [sym__debug_set_iobuf_size] = STATE(279),
    [sym__faked_system_time] = STATE(279),
    [sym__status_fd] = STATE(279),
    [sym__status_file] = STATE(279),
    [sym__logger_fd] = STATE(279),
    [sym__logger_file] = STATE(279),
    [sym__comment] = STATE(279),
    [sym__sig_notation] = STATE(212),
    [sym__cert_notation] = STATE(211),
    [sym__set_notation] = STATE(210),
    [sym__known_notation] = STATE(279),
    [sym__sig_policy_url] = STATE(279),
    [sym__cert_policy_url] = STATE(279),
    [sym__set_policy_url] = STATE(279),
    [sym__sig_keyserver_url] = STATE(279),
    [sym__set_filename] = STATE(279),
    [sym__cipher_algo] = STATE(279),
    [sym__digest_algo] = STATE(279),
    [sym__compress_algo] = STATE(279),
    [sym__cert_digest_algo] = STATE(279),
    [sym__disable_cipher_algo] = STATE(279),
    [sym__disable_pubkey_algo] = STATE(279),
    [sym__passphrase_repeat] = STATE(279),
    [sym__passphrase_fd] = STATE(279),
    [sym__passphrase_file] = STATE(279),
    [sym__passphrase] = STATE(279),
    [sym__pinentry_mode] = STATE(279),
    [sym__request_origin] = STATE(279),
    [sym__command_fd] = STATE(279),
    [sym__command_file] = STATE(279),
    [sym__weak_digest] = STATE(279),
    [sym__override_session_key] = STATE(279),
    [sym__override_session_key_fd] = STATE(279),
    [sym__default_sig_expire] = STATE(279),
    [sym__default_cert_expire] = STATE(279),
    [sym__default_new_key_algo] = STATE(279),
    [sym__default_preference_list] = STATE(279),
    [sym__default_keyserver_url] = STATE(279),
    [sym__chuid] = STATE(279),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(506),
    [aux_sym_config_token1] = ACTIONS(508),
    [anon_sym_default_DASHrecipient] = ACTIONS(9),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(11),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(11),
    [anon_sym_verbose] = ACTIONS(11),
    [anon_sym_no_DASHtty] = ACTIONS(11),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(11),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(11),
    [anon_sym_enable_DASHdsa2] = ACTIONS(11),
    [anon_sym_disable_DASHdsa2] = ACTIONS(11),
    [anon_sym_no_DASHcompress] = ACTIONS(11),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(11),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(11),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(11),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(11),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(11),
    [anon_sym_always_DASHtrust] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(11),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(11),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(11),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(11),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(11),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(11),
    [anon_sym_no_DASHautostart] = ACTIONS(11),
    [anon_sym_lock_DASHonce] = ACTIONS(11),
    [anon_sym_lock_DASHmultiple] = ACTIONS(11),
    [anon_sym_lock_DASHnever] = ACTIONS(11),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(11),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(11),
    [anon_sym_no_DASHgreeting] = ACTIONS(11),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(11),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(11),
    [anon_sym_require_DASHsecmem] = ACTIONS(11),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(11),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(11),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(11),
    [anon_sym_expert] = ACTIONS(11),
    [anon_sym_no_DASHexpert] = ACTIONS(11),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(11),
    [anon_sym_no_DASHgroups] = ACTIONS(11),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(11),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(11),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(11),
    [anon_sym_armor] = ACTIONS(11),
    [anon_sym_no_DASHarmor] = ACTIONS(11),
    [anon_sym_with_DASHcolons] = ACTIONS(11),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(11),
    [anon_sym_with_DASHfingerprint] = ACTIONS(11),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(11),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(11),
    [anon_sym_with_DASHkeygrip] = ACTIONS(11),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(11),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(11),
    [anon_sym_with_DASHsecret] = ACTIONS(11),
    [anon_sym_textmode] = ACTIONS(11),
    [anon_sym_no_DASHtextmode] = ACTIONS(11),
    [anon_sym_force_DASHocb] = ACTIONS(11),
    [anon_sym_force_DASHaead] = ACTIONS(11),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(11),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(11),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(11),
    [anon_sym_gnupg] = ACTIONS(11),
    [anon_sym_openpgp] = ACTIONS(11),
    [anon_sym_rfc4880] = ACTIONS(9),
    [anon_sym_rfc4880bis] = ACTIONS(11),
    [anon_sym_rfc2440] = ACTIONS(11),
    [anon_sym_pgp7] = ACTIONS(11),
    [anon_sym_pgp8] = ACTIONS(11),
    [anon_sym_list_DASHonly] = ACTIONS(11),
    [anon_sym_interactive] = ACTIONS(11),
    [anon_sym_debug_DASHall] = ACTIONS(9),
    [anon_sym_debug_DASHiolbf] = ACTIONS(11),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(11),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(11),
    [anon_sym_full_DASHtimestrings] = ACTIONS(11),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(11),
    [anon_sym_log_DASHtime] = ACTIONS(11),
    [anon_sym_no_DASHcomments] = ACTIONS(11),
    [anon_sym_emit_DASHversion] = ACTIONS(11),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(11),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(11),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(11),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(11),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(11),
    [anon_sym_throw_DASHkeyids] = ACTIONS(11),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(11),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(11),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(11),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(11),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(11),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(11),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(11),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(11),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(11),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(11),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(11),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(11),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(11),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(11),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(11),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(11),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(11),
    [anon_sym_no_DASHkeyring] = ACTIONS(11),
    [anon_sym_skip_DASHverify] = ACTIONS(11),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(11),
    [anon_sym_list_DASHsignatures] = ACTIONS(11),
    [anon_sym_list_DASHsigs] = ACTIONS(11),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(11),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(11),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(11),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(11),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(11),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(11),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(11),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(11),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(11),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(11),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(11),
    [anon_sym_default_DASHkey] = ACTIONS(13),
    [anon_sym_list_DASHoptions] = ACTIONS(15),
    [anon_sym_verify_DASHoptions] = ACTIONS(17),
    [anon_sym_photo_DASHviewer] = ACTIONS(19),
    [anon_sym_exec_DASHpath] = ACTIONS(21),
    [anon_sym_keyring] = ACTIONS(23),
    [anon_sym_primary_DASHkeyring] = ACTIONS(25),
    [anon_sym_trustdb_DASHname] = ACTIONS(27),
    [anon_sym_display_DASHcharset] = ACTIONS(29),
    [sym__utf8_strings] = ACTIONS(11),
    [sym__no_utf8_strings] = ACTIONS(11),
    [anon_sym_compress_DASHlevel] = ACTIONS(31),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(33),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(37),
    [anon_sym_trusted_DASHkey] = ACTIONS(39),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(41),
    [anon_sym_trust_DASHmodel] = ACTIONS(43),
    [anon_sym_assert_DASHsigner] = ACTIONS(45),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(47),
    [anon_sym_keyid_DASHformat] = ACTIONS(49),
    [anon_sym_keyserver] = ACTIONS(51),
    [anon_sym_completes_DASHneeded] = ACTIONS(53),
    [anon_sym_marginals_DASHneeded] = ACTIONS(55),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(57),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(59),
    [anon_sym_agent_DASHprogram] = ACTIONS(61),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(63),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(65),
    [anon_sym_recipient] = ACTIONS(67),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(69),
    [anon_sym_recipient_DASHfile] = ACTIONS(71),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(73),
    [anon_sym_encrypt_DASHto] = ACTIONS(75),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(77),
    [anon_sym_group] = ACTIONS(79),
    [anon_sym_ungroup] = ACTIONS(81),
    [anon_sym_local_DASHuser] = ACTIONS(83),
    [anon_sym_sender] = ACTIONS(85),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(87),
    [anon_sym_output] = ACTIONS(89),
    [anon_sym_max_DASHoutput] = ACTIONS(91),
    [anon_sym_chunk_DASHsize] = ACTIONS(93),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(95),
    [anon_sym_key_DASHorigin] = ACTIONS(97),
    [anon_sym_import_DASHoptions] = ACTIONS(99),
    [anon_sym_export_DASHoptions] = ACTIONS(101),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(103),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(105),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(107),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(109),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(111),
    [anon_sym_s2k_DASHmode] = ACTIONS(113),
    [anon_sym_s2k_DASHcount] = ACTIONS(115),
    [anon_sym_compliance] = ACTIONS(117),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(119),
    [sym__require_compliance] = ACTIONS(11),
    [anon_sym_debug_DASHlevel] = ACTIONS(121),
    [anon_sym_debug] = ACTIONS(123),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(125),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(127),
    [anon_sym_status_DASHfd] = ACTIONS(129),
    [anon_sym_status_DASHfile] = ACTIONS(131),
    [anon_sym_logger_DASHfd] = ACTIONS(133),
    [anon_sym_logger_DASHfile] = ACTIONS(135),
    [anon_sym_log_DASHfile] = ACTIONS(135),
    [anon_sym_comment] = ACTIONS(137),
    [anon_sym_sig_DASHnotation] = ACTIONS(139),
    [anon_sym_cert_DASHnotation] = ACTIONS(141),
    [anon_sym_set_DASHnotation] = ACTIONS(143),
    [anon_sym_known_DASHnotation] = ACTIONS(145),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(147),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(149),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(151),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(153),
    [anon_sym_set_DASHfilename] = ACTIONS(155),
    [anon_sym_cipher_DASHalgo] = ACTIONS(157),
    [anon_sym_digest_DASHalgo] = ACTIONS(159),
    [anon_sym_compress_DASHalgo] = ACTIONS(161),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(163),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(165),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(167),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(169),
    [anon_sym_passphrase_DASHfd] = ACTIONS(171),
    [anon_sym_passphrase_DASHfile] = ACTIONS(173),
    [anon_sym_passphrase] = ACTIONS(175),
    [anon_sym_pinentry_DASHmode] = ACTIONS(177),
    [anon_sym_request_DASHorigin] = ACTIONS(179),
    [anon_sym_command_DASHfd] = ACTIONS(181),
    [anon_sym_command_DASHfile] = ACTIONS(183),
    [anon_sym_weak_DASHdigest] = ACTIONS(185),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(187),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(189),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(191),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(193),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(195),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(197),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(199),
    [anon_sym_chuid] = ACTIONS(201),
    [sym_comment] = ACTIONS(203),
    [sym__space] = ACTIONS(205),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [aux_sym_config_token1] = ACTIONS(207),
    [anon_sym_default_DASHrecipient] = ACTIONS(510),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(207),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(207),
    [anon_sym_verbose] = ACTIONS(207),
    [anon_sym_no_DASHtty] = ACTIONS(207),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(207),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(207),
    [anon_sym_enable_DASHdsa2] = ACTIONS(207),
    [anon_sym_disable_DASHdsa2] = ACTIONS(207),
    [anon_sym_no_DASHcompress] = ACTIONS(207),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(207),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(207),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(207),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(207),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(207),
    [anon_sym_always_DASHtrust] = ACTIONS(207),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(207),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(207),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(207),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(207),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(207),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(207),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(207),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(207),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(207),
    [anon_sym_no_DASHautostart] = ACTIONS(207),
    [anon_sym_lock_DASHonce] = ACTIONS(207),
    [anon_sym_lock_DASHmultiple] = ACTIONS(207),
    [anon_sym_lock_DASHnever] = ACTIONS(207),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(207),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(207),
    [anon_sym_no_DASHgreeting] = ACTIONS(207),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(207),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(207),
    [anon_sym_require_DASHsecmem] = ACTIONS(207),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(207),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(207),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(207),
    [anon_sym_expert] = ACTIONS(207),
    [anon_sym_no_DASHexpert] = ACTIONS(207),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(207),
    [anon_sym_no_DASHgroups] = ACTIONS(207),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(207),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(207),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(207),
    [anon_sym_armor] = ACTIONS(207),
    [anon_sym_no_DASHarmor] = ACTIONS(207),
    [anon_sym_with_DASHcolons] = ACTIONS(207),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(207),
    [anon_sym_with_DASHfingerprint] = ACTIONS(207),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(207),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(207),
    [anon_sym_with_DASHkeygrip] = ACTIONS(207),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(207),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(207),
    [anon_sym_with_DASHsecret] = ACTIONS(207),
    [anon_sym_textmode] = ACTIONS(207),
    [anon_sym_no_DASHtextmode] = ACTIONS(207),
    [anon_sym_force_DASHocb] = ACTIONS(207),
    [anon_sym_force_DASHaead] = ACTIONS(207),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(207),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(207),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(207),
    [anon_sym_gnupg] = ACTIONS(207),
    [anon_sym_openpgp] = ACTIONS(207),
    [anon_sym_rfc4880] = ACTIONS(510),
    [anon_sym_rfc4880bis] = ACTIONS(207),
    [anon_sym_rfc2440] = ACTIONS(207),
    [anon_sym_pgp7] = ACTIONS(207),
    [anon_sym_pgp8] = ACTIONS(207),
    [anon_sym_list_DASHonly] = ACTIONS(207),
    [anon_sym_interactive] = ACTIONS(207),
    [anon_sym_debug_DASHall] = ACTIONS(510),
    [anon_sym_debug_DASHiolbf] = ACTIONS(207),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(207),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(207),
    [anon_sym_full_DASHtimestrings] = ACTIONS(207),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(207),
    [anon_sym_log_DASHtime] = ACTIONS(207),
    [anon_sym_no_DASHcomments] = ACTIONS(207),
    [anon_sym_emit_DASHversion] = ACTIONS(207),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(207),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(207),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(207),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(207),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(207),
    [anon_sym_throw_DASHkeyids] = ACTIONS(207),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(207),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(207),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(207),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(207),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(207),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(207),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(207),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(207),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(207),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(207),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(207),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(207),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(207),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(207),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(207),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(207),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(207),
    [anon_sym_no_DASHkeyring] = ACTIONS(207),
    [anon_sym_skip_DASHverify] = ACTIONS(207),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(207),
    [anon_sym_list_DASHsignatures] = ACTIONS(207),
    [anon_sym_list_DASHsigs] = ACTIONS(207),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(207),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(207),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(207),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(207),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(207),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(207),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(207),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(207),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(207),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(207),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(207),
    [anon_sym_default_DASHkey] = ACTIONS(510),
    [anon_sym_list_DASHoptions] = ACTIONS(207),
    [anon_sym_verify_DASHoptions] = ACTIONS(207),
    [anon_sym_photo_DASHviewer] = ACTIONS(207),
    [anon_sym_exec_DASHpath] = ACTIONS(207),
    [anon_sym_keyring] = ACTIONS(207),
    [anon_sym_primary_DASHkeyring] = ACTIONS(207),
    [anon_sym_trustdb_DASHname] = ACTIONS(207),
    [anon_sym_display_DASHcharset] = ACTIONS(207),
    [sym__utf8_strings] = ACTIONS(207),
    [sym__no_utf8_strings] = ACTIONS(207),
    [anon_sym_compress_DASHlevel] = ACTIONS(207),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(207),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(207),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(207),
    [anon_sym_trusted_DASHkey] = ACTIONS(207),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(207),
    [anon_sym_trust_DASHmodel] = ACTIONS(207),
    [anon_sym_assert_DASHsigner] = ACTIONS(207),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(207),
    [anon_sym_keyid_DASHformat] = ACTIONS(207),
    [anon_sym_keyserver] = ACTIONS(207),
    [anon_sym_completes_DASHneeded] = ACTIONS(207),
    [anon_sym_marginals_DASHneeded] = ACTIONS(207),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(207),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(207),
    [anon_sym_agent_DASHprogram] = ACTIONS(207),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(207),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(207),
    [anon_sym_recipient] = ACTIONS(510),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(510),
    [anon_sym_recipient_DASHfile] = ACTIONS(207),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(207),
    [anon_sym_encrypt_DASHto] = ACTIONS(207),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(207),
    [anon_sym_group] = ACTIONS(207),
    [anon_sym_ungroup] = ACTIONS(207),
    [anon_sym_local_DASHuser] = ACTIONS(207),
    [anon_sym_sender] = ACTIONS(207),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(207),
    [anon_sym_output] = ACTIONS(207),
    [anon_sym_max_DASHoutput] = ACTIONS(207),
    [anon_sym_chunk_DASHsize] = ACTIONS(207),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(207),
    [anon_sym_key_DASHorigin] = ACTIONS(207),
    [anon_sym_import_DASHoptions] = ACTIONS(207),
    [anon_sym_export_DASHoptions] = ACTIONS(207),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(207),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(207),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(207),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(207),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(207),
    [anon_sym_s2k_DASHmode] = ACTIONS(207),
    [anon_sym_s2k_DASHcount] = ACTIONS(207),
    [anon_sym_compliance] = ACTIONS(207),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(207),
    [sym__require_compliance] = ACTIONS(207),
    [anon_sym_debug_DASHlevel] = ACTIONS(207),
    [anon_sym_debug] = ACTIONS(510),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(207),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(207),
    [anon_sym_status_DASHfd] = ACTIONS(207),
    [anon_sym_status_DASHfile] = ACTIONS(207),
    [anon_sym_logger_DASHfd] = ACTIONS(207),
    [anon_sym_logger_DASHfile] = ACTIONS(207),
    [anon_sym_log_DASHfile] = ACTIONS(207),
    [anon_sym_comment] = ACTIONS(207),
    [anon_sym_sig_DASHnotation] = ACTIONS(207),
    [anon_sym_cert_DASHnotation] = ACTIONS(207),
    [anon_sym_set_DASHnotation] = ACTIONS(207),
    [anon_sym_known_DASHnotation] = ACTIONS(207),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(207),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(207),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(207),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(207),
    [anon_sym_set_DASHfilename] = ACTIONS(207),
    [anon_sym_cipher_DASHalgo] = ACTIONS(207),
    [anon_sym_digest_DASHalgo] = ACTIONS(207),
    [anon_sym_compress_DASHalgo] = ACTIONS(207),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(207),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(207),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(207),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(207),
    [anon_sym_passphrase_DASHfd] = ACTIONS(207),
    [anon_sym_passphrase_DASHfile] = ACTIONS(207),
    [anon_sym_passphrase] = ACTIONS(510),
    [anon_sym_pinentry_DASHmode] = ACTIONS(207),
    [anon_sym_request_DASHorigin] = ACTIONS(207),
    [anon_sym_command_DASHfd] = ACTIONS(207),
    [anon_sym_command_DASHfile] = ACTIONS(207),
    [anon_sym_weak_DASHdigest] = ACTIONS(207),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(510),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(207),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(207),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(207),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(207),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(207),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(207),
    [anon_sym_chuid] = ACTIONS(207),
    [sym_comment] = ACTIONS(207),
    [sym__space] = ACTIONS(205),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(512), 1,
      aux_sym_config_token1,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      sym__pubkey_algo_value,
    STATE(6), 2,
      sym__default_preference_value,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(518), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [22] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(520), 1,
      aux_sym_config_token1,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      sym__pubkey_algo_value,
    STATE(6), 2,
      sym__default_preference_value,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(528), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [44] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      sym__pubkey_algo_value,
    ACTIONS(531), 1,
      aux_sym_config_token1,
    STATE(5), 2,
      sym__default_preference_value,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(518), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [66] = 8,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
    ACTIONS(539), 1,
      aux_sym__command_format_token1,
    STATE(30), 1,
      aux_sym__command_repeat1,
    STATE(133), 1,
      sym__command_format,
    STATE(209), 1,
      sym__command,
  [91] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(520), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__pubkey_algo_value,
    ACTIONS(541), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [105] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(543), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__pubkey_algo_value,
    ACTIONS(545), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [119] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      aux_sym__command_token2,
    STATE(14), 1,
      aux_sym__command_repeat2,
    STATE(72), 1,
      sym__command_format,
    ACTIONS(551), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [139] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_SQUOTE,
    ACTIONS(555), 1,
      aux_sym__command_token3,
    STATE(13), 1,
      aux_sym__command_repeat3,
    STATE(70), 1,
      sym__command_format,
    ACTIONS(553), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [159] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
    ACTIONS(562), 1,
      aux_sym__command_token3,
    STATE(13), 1,
      aux_sym__command_repeat3,
    STATE(70), 1,
      sym__command_format,
    ACTIONS(557), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [179] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    ACTIONS(567), 1,
      aux_sym__command_token2,
    STATE(14), 1,
      aux_sym__command_repeat2,
    STATE(72), 1,
      sym__command_format,
    ACTIONS(570), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [199] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(573), 1,
      aux_sym_config_token1,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [218] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(579), 1,
      aux_sym_config_token1,
    ACTIONS(581), 1,
      aux_sym__command_token1,
    ACTIONS(584), 1,
      aux_sym__command_format_token1,
    STATE(16), 1,
      aux_sym__command_repeat1,
    STATE(133), 1,
      sym__command_format,
  [237] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(589), 1,
      anon_sym_BANG,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    STATE(32), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [256] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    ACTIONS(593), 1,
      anon_sym_BANG,
    STATE(27), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [275] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    ACTIONS(595), 1,
      anon_sym_BANG,
    STATE(41), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [294] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(597), 1,
      anon_sym_BANG,
    STATE(36), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [313] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(599), 1,
      anon_sym_BANG,
    STATE(33), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [332] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(601), 1,
      anon_sym_BANG,
    STATE(15), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [351] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(603), 1,
      anon_sym_BANG,
    STATE(46), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [370] = 4,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(516), 1,
      sym__pubkey_algo_value,
    STATE(7), 1,
      sym__default_preference_value,
    ACTIONS(518), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [385] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      sym_number,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(310), 1,
      sym_string,
  [404] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(613), 1,
      aux_sym_config_token1,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      sym__key_locate_value,
    ACTIONS(621), 1,
      sym_url,
    STATE(26), 1,
      aux_sym__auto_key_locate_repeat1,
  [423] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    ACTIONS(624), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [442] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(549), 1,
      aux_sym__command_token2,
    STATE(11), 1,
      aux_sym__command_repeat2,
    STATE(72), 1,
      sym__command_format,
    ACTIONS(551), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [459] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(555), 1,
      aux_sym__command_token3,
    STATE(12), 1,
      aux_sym__command_repeat3,
    STATE(70), 1,
      sym__command_format,
    ACTIONS(553), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [476] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(539), 1,
      aux_sym__command_format_token1,
    ACTIONS(626), 1,
      aux_sym_config_token1,
    STATE(16), 1,
      aux_sym__command_repeat1,
    STATE(133), 1,
      sym__command_format,
  [495] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(628), 1,
      aux_sym_config_token1,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      sym__key_locate_value,
    ACTIONS(634), 1,
      sym_url,
    STATE(43), 1,
      aux_sym__auto_key_locate_repeat1,
  [514] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    ACTIONS(636), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [533] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(638), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [552] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(640), 1,
      aux_sym_config_token1,
    ACTIONS(642), 1,
      aux_sym__command_token1,
    ACTIONS(645), 1,
      aux_sym__notation_format_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [571] = 4,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(516), 1,
      sym__pubkey_algo_value,
    STATE(9), 1,
      sym__default_preference_value,
    ACTIONS(518), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [586] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(648), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [605] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(650), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [624] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(652), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [643] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(654), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [662] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(656), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [681] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    ACTIONS(658), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [700] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    ACTIONS(660), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [719] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    ACTIONS(632), 1,
      sym__key_locate_value,
    ACTIONS(634), 1,
      sym_url,
    ACTIONS(662), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym__auto_key_locate_repeat1,
  [738] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    ACTIONS(664), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [757] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(640), 1,
      anon_sym_EQ,
    ACTIONS(666), 1,
      aux_sym__command_token1,
    ACTIONS(669), 1,
      aux_sym__notation_format_token1,
    STATE(45), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [776] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    ACTIONS(672), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [795] = 6,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    ACTIONS(674), 1,
      anon_sym_EQ,
    STATE(45), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [814] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(676), 1,
      aux_sym_config_token1,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      sym__hash_algo_value,
    STATE(60), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [830] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(682), 1,
      aux_sym_config_token1,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      sym__import_parameter,
    STATE(49), 1,
      aux_sym__import_options_repeat1,
  [846] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(690), 1,
      aux_sym_config_token1,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      sym__new_key_algo,
    STATE(115), 1,
      aux_sym__default_new_key_algo_repeat1,
  [862] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(256), 1,
      sym_string,
  [878] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(257), 1,
      sym_string,
  [894] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(258), 1,
      sym_string,
  [910] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(696), 1,
      aux_sym_config_token1,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      sym__debug_flag_value,
    STATE(75), 1,
      aux_sym__debug_repeat1,
  [926] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(702), 1,
      aux_sym_config_token1,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      sym__compression_algo_value,
    STATE(57), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [942] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(273), 1,
      sym_string,
  [958] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(708), 1,
      aux_sym_config_token1,
    ACTIONS(710), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      sym__compression_algo_value,
    STATE(57), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [974] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(274), 1,
      sym_string,
  [990] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(716), 1,
      aux_sym_config_token1,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      sym__cipher_algo_value,
    STATE(65), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [1006] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(722), 1,
      aux_sym_config_token1,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      sym__hash_algo_value,
    STATE(60), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [1022] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(730), 1,
      aux_sym_config_token1,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      sym__export_parameter,
    STATE(118), 1,
      aux_sym__export_options_repeat1,
  [1038] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(736), 1,
      aux_sym_config_token1,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      sym__import_parameter,
    STATE(49), 1,
      aux_sym__import_options_repeat1,
  [1054] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(269), 1,
      sym_string,
  [1070] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(744), 1,
      sym__key_locate_value,
    ACTIONS(742), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [1082] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(746), 1,
      aux_sym_config_token1,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      sym__cipher_algo_value,
    STATE(65), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [1098] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(754), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(756), 1,
      anon_sym_SQUOTE,
    ACTIONS(758), 1,
      aux_sym__command_token3,
    STATE(111), 1,
      aux_sym_string_repeat2,
  [1114] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(282), 1,
      sym_string,
  [1130] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(756), 1,
      anon_sym_DQUOTE,
    ACTIONS(760), 1,
      aux_sym__command_token2,
    ACTIONS(762), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(106), 1,
      aux_sym_string_repeat1,
  [1146] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(249), 1,
      sym_string,
  [1162] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(766), 1,
      aux_sym__command_token3,
    ACTIONS(764), 3,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      anon_sym_SQUOTE,
      aux_sym__command_format_token1,
  [1174] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(248), 1,
      sym_string,
  [1190] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(770), 1,
      aux_sym__command_token2,
    ACTIONS(768), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [1202] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(772), 1,
      aux_sym_config_token1,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      sym__verify_parameter,
    STATE(103), 1,
      aux_sym__verify_options_repeat1,
  [1218] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(778), 1,
      aux_sym_config_token1,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(782), 1,
      sym__list_parameter,
    STATE(87), 1,
      aux_sym__list_options_repeat1,
  [1234] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(784), 1,
      aux_sym_config_token1,
    ACTIONS(786), 1,
      anon_sym_COMMA,
    ACTIONS(789), 1,
      sym__debug_flag_value,
    STATE(75), 1,
      aux_sym__debug_repeat1,
  [1250] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(255), 1,
      sym_string,
  [1266] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      aux_sym_config_token1,
    ACTIONS(794), 1,
      sym__new_key_algo,
    STATE(50), 1,
      aux_sym__default_new_key_algo_repeat1,
  [1282] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    STATE(37), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [1298] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(271), 1,
      sym_string,
  [1314] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    STATE(38), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [1330] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    STATE(39), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [1346] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym__command_token1,
    ACTIONS(577), 1,
      aux_sym__notation_format_token1,
    STATE(40), 1,
      aux_sym__notation,
    STATE(130), 1,
      sym__notation_format,
  [1362] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(247), 1,
      sym_string,
  [1378] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    STATE(42), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [1394] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(215), 1,
      sym_string,
  [1410] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    STATE(44), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [1426] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(796), 1,
      aux_sym_config_token1,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    ACTIONS(801), 1,
      sym__list_parameter,
    STATE(87), 1,
      aux_sym__list_options_repeat1,
  [1442] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym__command_token1,
    ACTIONS(591), 1,
      aux_sym__notation_format_token1,
    STATE(47), 1,
      aux_sym__notation,
    STATE(141), 1,
      sym__notation_format,
  [1458] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(246), 1,
      sym_string,
  [1474] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(245), 1,
      sym_string,
  [1490] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      aux_sym_config_token1,
    ACTIONS(806), 1,
      sym__debug_flag_value,
    STATE(54), 1,
      aux_sym__debug_repeat1,
  [1506] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(706), 1,
      sym__compression_algo_value,
    ACTIONS(808), 1,
      aux_sym_config_token1,
    STATE(55), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [1522] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      sym__hash_algo_value,
    ACTIONS(810), 1,
      aux_sym_config_token1,
    STATE(48), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [1538] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      sym__cipher_algo_value,
    ACTIONS(812), 1,
      aux_sym_config_token1,
    STATE(59), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [1554] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      aux_sym_config_token1,
    ACTIONS(816), 1,
      sym__export_parameter,
    STATE(61), 1,
      aux_sym__export_options_repeat1,
  [1570] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      aux_sym_config_token1,
    ACTIONS(820), 1,
      sym__import_parameter,
    STATE(62), 1,
      aux_sym__import_options_repeat1,
  [1586] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(244), 1,
      sym_string,
  [1602] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(243), 1,
      sym_string,
  [1618] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(242), 1,
      sym_string,
  [1634] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(241), 1,
      sym_string,
  [1650] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(254), 1,
      sym_string,
  [1666] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(240), 1,
      sym_string,
  [1682] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(822), 1,
      aux_sym_config_token1,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      sym__verify_parameter,
    STATE(103), 1,
      aux_sym__verify_options_repeat1,
  [1698] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(239), 1,
      sym_string,
  [1714] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(174), 1,
      sym_string,
  [1730] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(830), 1,
      anon_sym_DQUOTE,
    ACTIONS(832), 1,
      aux_sym__command_token2,
    ACTIONS(835), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(106), 1,
      aux_sym_string_repeat1,
  [1746] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(238), 1,
      sym_string,
  [1762] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      aux_sym_config_token1,
    ACTIONS(840), 1,
      sym__verify_parameter,
    STATE(73), 1,
      aux_sym__verify_options_repeat1,
  [1778] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(236), 1,
      sym_string,
  [1794] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(214), 1,
      sym_string,
  [1810] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(842), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(845), 1,
      anon_sym_SQUOTE,
    ACTIONS(847), 1,
      aux_sym__command_token3,
    STATE(111), 1,
      aux_sym_string_repeat2,
  [1826] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(216), 1,
      sym_string,
  [1842] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(217), 1,
      sym_string,
  [1858] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      aux_sym_config_token1,
    ACTIONS(852), 1,
      sym__list_parameter,
    STATE(74), 1,
      aux_sym__list_options_repeat1,
  [1874] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(854), 1,
      aux_sym_config_token1,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      sym__new_key_algo,
    STATE(115), 1,
      aux_sym__default_new_key_algo_repeat1,
  [1890] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(235), 1,
      sym_string,
  [1906] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(864), 1,
      sym__key_locate_value,
    ACTIONS(862), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [1918] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(866), 1,
      aux_sym_config_token1,
    ACTIONS(868), 1,
      anon_sym_COMMA,
    ACTIONS(871), 1,
      sym__export_parameter,
    STATE(118), 1,
      aux_sym__export_options_repeat1,
  [1934] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(305), 1,
      sym_string,
  [1950] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(289), 1,
      sym_string,
  [1966] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(303), 1,
      sym_string,
  [1982] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(227), 1,
      sym_string,
  [1998] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(298), 1,
      sym_string,
  [2014] = 5,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(299), 1,
      sym_string,
  [2030] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(876), 1,
      aux_sym__command_token3,
    ACTIONS(874), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      anon_sym_SQUOTE,
  [2041] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(878), 1,
      aux_sym__add_desig_revoker_token1,
    ACTIONS(880), 2,
      aux_sym__add_desig_revoker_token2,
      sym_key,
  [2052] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(796), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [2061] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(866), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__export_parameter,
  [2070] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(682), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__import_parameter,
  [2079] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(884), 1,
      aux_sym__command_token1,
    ACTIONS(882), 2,
      aux_sym_config_token1,
      aux_sym__notation_format_token1,
  [2090] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(854), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__new_key_algo,
  [2099] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(886), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo_value,
  [2108] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(890), 1,
      aux_sym__command_token1,
    ACTIONS(888), 2,
      aux_sym_config_token1,
      aux_sym__command_format_token1,
  [2119] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(892), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo_value,
  [2128] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(760), 1,
      aux_sym__command_token2,
    ACTIONS(762), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(68), 1,
      aux_sym_string_repeat1,
  [2141] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(754), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(758), 1,
      aux_sym__command_token3,
    STATE(66), 1,
      aux_sym_string_repeat2,
  [2154] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(894), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo_value,
  [2163] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(822), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [2172] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(896), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo_value,
  [2181] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(898), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo_value,
  [2190] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(884), 1,
      aux_sym__command_token1,
    ACTIONS(882), 2,
      anon_sym_EQ,
      aux_sym__notation_format_token1,
  [2201] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(900), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo_value,
  [2210] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(784), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__debug_flag_value,
  [2219] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(904), 1,
      aux_sym__command_token2,
    ACTIONS(902), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [2230] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(906), 1,
      aux_sym_config_token1,
    ACTIONS(908), 1,
      anon_sym_COMMA,
  [2240] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(910), 1,
      sym__key_locate_value,
    ACTIONS(912), 1,
      sym_url,
  [2250] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(914), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [2258] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(916), 1,
      aux_sym_config_token1,
    ACTIONS(918), 1,
      anon_sym_BANG,
  [2268] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(920), 1,
      sym__key_locate_value,
    ACTIONS(922), 1,
      sym_url,
  [2278] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(924), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [2286] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(926), 1,
      aux_sym__debug_token1,
    ACTIONS(928), 1,
      sym__debug_flag_value,
  [2296] = 3,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(930), 1,
      sym_number,
    ACTIONS(932), 1,
      sym_iso_time,
  [2306] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(934), 1,
      aux_sym_config_token1,
  [2313] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(936), 1,
      aux_sym_config_token1,
  [2320] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(938), 1,
      sym__hash_algo_value,
  [2327] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(940), 1,
      aux_sym__s2k_mode_token1,
  [2334] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(942), 1,
      sym_number,
  [2341] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(944), 1,
      sym__compliance_value,
  [2348] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(946), 1,
      sym_number,
  [2355] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(948), 1,
      sym__debug_level_value,
  [2362] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(950), 1,
      sym__cipher_algo_value,
  [2369] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(952), 1,
      sym_number,
  [2376] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(954), 1,
      sym__hash_algo_value,
  [2383] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(956), 1,
      sym_number,
  [2390] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(958), 1,
      sym__compression_algo_value,
  [2397] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(960), 1,
      sym_number,
  [2404] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(962), 1,
      sym_number,
  [2411] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(964), 1,
      sym__export_parameter,
  [2418] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(966), 1,
      sym__import_parameter,
  [2425] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(968), 1,
      sym__key_origin_value,
  [2432] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(970), 1,
      sym_number,
  [2439] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(972), 1,
      sym_number,
  [2446] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(974), 1,
      sym_number,
  [2453] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(976), 1,
      aux_sym_config_token1,
  [2460] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(978), 1,
      sym_number,
  [2467] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(980), 1,
      sym__tofu_policy_value,
  [2474] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(982), 1,
      sym_number,
  [2481] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(984), 1,
      sym__cipher_algo_value,
  [2488] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(986), 1,
      sym__hash_algo_value,
  [2495] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(988), 1,
      sym__compression_algo_value,
  [2502] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(990), 1,
      sym__hash_algo_value,
  [2509] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(992), 1,
      sym__cipher_algo_value,
  [2516] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(994), 1,
      sym__pubkey_algo_value,
  [2523] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(996), 1,
      sym_number,
  [2530] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(998), 1,
      sym_number,
  [2537] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1000), 1,
      sym_number,
  [2544] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1002), 1,
      sym_url,
  [2551] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1004), 1,
      sym__pinentry_mode_value,
  [2558] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1006), 1,
      sym__request_origin_value,
  [2565] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1008), 1,
      sym_number,
  [2572] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1010), 1,
      sym__keyid_format_value,
  [2579] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1012), 1,
      sym__hash_algo_value,
  [2586] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1014), 1,
      sym__model,
  [2593] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1016), 1,
      sym_number,
  [2600] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1018), 1,
      sym_expire_time,
  [2607] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1020), 1,
      sym_expire_time,
  [2614] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1022), 1,
      sym__new_key_algo,
  [2621] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1024), 1,
      sym_key,
  [2628] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1026), 1,
      sym_url,
  [2635] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1028), 1,
      aux_sym__default_cert_level_token1,
  [2642] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1030), 1,
      aux_sym__default_cert_level_token1,
  [2649] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1032), 1,
      aux_sym__compress_level_token1,
  [2656] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1034), 1,
      aux_sym_config_token1,
  [2663] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1036), 1,
      aux_sym__compress_level_token1,
  [2670] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1038), 1,
      sym__charset_value,
  [2677] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1040), 1,
      sym__verify_parameter,
  [2684] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1042), 1,
      sym__list_parameter,
  [2691] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1044), 1,
      sym_key,
  [2698] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1046), 1,
      aux_sym_config_token1,
  [2705] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(934), 1,
      aux_sym_config_token1,
  [2712] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(934), 1,
      aux_sym_config_token1,
  [2719] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(934), 1,
      aux_sym_config_token1,
  [2726] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1048), 1,
      aux_sym_config_token1,
  [2733] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1050), 1,
      aux_sym_config_token1,
  [2740] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1052), 1,
      aux_sym_config_token1,
  [2747] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1054), 1,
      aux_sym_config_token1,
  [2754] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1056), 1,
      aux_sym_config_token1,
  [2761] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1058), 1,
      aux_sym_config_token1,
  [2768] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1060), 1,
      aux_sym_config_token1,
  [2775] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1062), 1,
      aux_sym_config_token1,
  [2782] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1064), 1,
      aux_sym_config_token1,
  [2789] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1066), 1,
      aux_sym_config_token1,
  [2796] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1068), 1,
      aux_sym_config_token1,
  [2803] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1070), 1,
      sym_key,
  [2810] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1072), 1,
      aux_sym_config_token1,
  [2817] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1074), 1,
      aux_sym_config_token1,
  [2824] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1076), 1,
      aux_sym_config_token1,
  [2831] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1078), 1,
      ts_builtin_sym_end,
  [2838] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1080), 1,
      aux_sym_config_token1,
  [2845] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1082), 1,
      aux_sym_config_token1,
  [2852] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1084), 1,
      aux_sym_config_token1,
  [2859] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1086), 1,
      sym__verify_parameter,
  [2866] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1088), 1,
      aux_sym_config_token1,
  [2873] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1090), 1,
      aux_sym_config_token1,
  [2880] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1092), 1,
      aux_sym_config_token1,
  [2887] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1094), 1,
      aux_sym_config_token1,
  [2894] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1096), 1,
      aux_sym_config_token1,
  [2901] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1098), 1,
      aux_sym_config_token1,
  [2908] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1100), 1,
      aux_sym_config_token1,
  [2915] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1102), 1,
      aux_sym_config_token1,
  [2922] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1104), 1,
      aux_sym_config_token1,
  [2929] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1106), 1,
      aux_sym_config_token1,
  [2936] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1108), 1,
      aux_sym_config_token1,
  [2943] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1110), 1,
      anon_sym_EQ,
  [2950] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1112), 1,
      aux_sym_config_token1,
  [2957] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1114), 1,
      aux_sym_config_token1,
  [2964] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1116), 1,
      aux_sym_config_token1,
  [2971] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1118), 1,
      aux_sym_config_token1,
  [2978] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1120), 1,
      aux_sym_config_token1,
  [2985] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1122), 1,
      aux_sym_config_token1,
  [2992] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1124), 1,
      aux_sym_config_token1,
  [2999] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1126), 1,
      aux_sym_config_token1,
  [3006] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1128), 1,
      aux_sym_config_token1,
  [3013] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1130), 1,
      aux_sym_config_token1,
  [3020] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1132), 1,
      aux_sym_config_token1,
  [3027] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1134), 1,
      aux_sym_config_token1,
  [3034] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1136), 1,
      aux_sym_config_token1,
  [3041] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1138), 1,
      aux_sym_config_token1,
  [3048] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1140), 1,
      aux_sym_config_token1,
  [3055] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1142), 1,
      aux_sym_config_token1,
  [3062] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1144), 1,
      aux_sym_config_token1,
  [3069] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1146), 1,
      aux_sym_config_token1,
  [3076] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1148), 1,
      aux_sym_config_token1,
  [3083] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1150), 1,
      aux_sym_config_token1,
  [3090] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1152), 1,
      aux_sym_config_token1,
  [3097] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(804), 1,
      aux_sym_config_token1,
  [3104] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1154), 1,
      aux_sym_config_token1,
  [3111] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1156), 1,
      aux_sym_config_token1,
  [3118] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1158), 1,
      aux_sym_config_token1,
  [3125] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1160), 1,
      aux_sym_config_token1,
  [3132] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1162), 1,
      aux_sym_config_token1,
  [3139] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1164), 1,
      aux_sym_config_token1,
  [3146] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1166), 1,
      aux_sym_config_token1,
  [3153] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1168), 1,
      aux_sym_config_token1,
  [3160] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1170), 1,
      aux_sym_config_token1,
  [3167] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1172), 1,
      sym__new_key_algo,
  [3174] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1174), 1,
      aux_sym_config_token1,
  [3181] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1176), 1,
      sym__debug_flag_value,
  [3188] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1178), 1,
      aux_sym_config_token1,
  [3195] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1180), 1,
      sym__cipher_algo_value,
  [3202] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1182), 1,
      sym__compression_algo_value,
  [3209] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1184), 1,
      aux_sym_config_token1,
  [3216] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1186), 1,
      sym__hash_algo_value,
  [3223] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1188), 1,
      sym__cipher_algo_value,
  [3230] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1190), 1,
      sym__export_parameter,
  [3237] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1192), 1,
      sym__import_parameter,
  [3244] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1194), 1,
      sym_url,
  [3251] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1196), 1,
      aux_sym_config_token1,
  [3258] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1198), 1,
      aux_sym_config_token1,
  [3265] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1200), 1,
      aux_sym_config_token1,
  [3272] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1202), 1,
      aux_sym_config_token1,
  [3279] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1204), 1,
      aux_sym_config_token1,
  [3286] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1206), 1,
      aux_sym_config_token1,
  [3293] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1208), 1,
      aux_sym_config_token1,
  [3300] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1210), 1,
      aux_sym_config_token1,
  [3307] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1212), 1,
      aux_sym_config_token1,
  [3314] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1214), 1,
      aux_sym_config_token1,
  [3321] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1216), 1,
      aux_sym_config_token1,
  [3328] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1218), 1,
      aux_sym_config_token1,
  [3335] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1220), 1,
      aux_sym_config_token1,
  [3342] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1222), 1,
      aux_sym_config_token1,
  [3349] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1224), 1,
      aux_sym_config_token1,
  [3356] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1226), 1,
      aux_sym_config_token1,
  [3363] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1228), 1,
      aux_sym_config_token1,
  [3370] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1230), 1,
      aux_sym_config_token1,
  [3377] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1232), 1,
      aux_sym_config_token1,
  [3384] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1234), 1,
      aux_sym_config_token1,
  [3391] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1236), 1,
      aux_sym_config_token1,
  [3398] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1238), 1,
      aux_sym_config_token1,
  [3405] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1240), 1,
      aux_sym_config_token1,
  [3412] = 2,
    ACTIONS(205), 1,
      sym__space,
    ACTIONS(1242), 1,
      sym__list_parameter,
  [3419] = 1,
    ACTIONS(1244), 1,
      sym__space,
  [3423] = 1,
    ACTIONS(1246), 1,
      sym__space,
  [3427] = 1,
    ACTIONS(1248), 1,
      sym__space,
  [3431] = 1,
    ACTIONS(1250), 1,
      sym__space,
  [3435] = 1,
    ACTIONS(1252), 1,
      sym__space,
  [3439] = 1,
    ACTIONS(1254), 1,
      sym__space,
  [3443] = 1,
    ACTIONS(1256), 1,
      sym__space,
  [3447] = 1,
    ACTIONS(1258), 1,
      sym__space,
  [3451] = 1,
    ACTIONS(1260), 1,
      sym__space,
  [3455] = 1,
    ACTIONS(1262), 1,
      sym__space,
  [3459] = 1,
    ACTIONS(1264), 1,
      sym__space,
  [3463] = 1,
    ACTIONS(1266), 1,
      sym__space,
  [3467] = 1,
    ACTIONS(1268), 1,
      sym__space,
  [3471] = 1,
    ACTIONS(1270), 1,
      sym__space,
  [3475] = 1,
    ACTIONS(1272), 1,
      sym__space,
  [3479] = 1,
    ACTIONS(1274), 1,
      sym__space,
  [3483] = 1,
    ACTIONS(1276), 1,
      sym__space,
  [3487] = 1,
    ACTIONS(1278), 1,
      sym__space,
  [3491] = 1,
    ACTIONS(1280), 1,
      sym__space,
  [3495] = 1,
    ACTIONS(1282), 1,
      sym__space,
  [3499] = 1,
    ACTIONS(1284), 1,
      sym__space,
  [3503] = 1,
    ACTIONS(1286), 1,
      sym__space,
  [3507] = 1,
    ACTIONS(1288), 1,
      sym__space,
  [3511] = 1,
    ACTIONS(1290), 1,
      sym__space,
  [3515] = 1,
    ACTIONS(1292), 1,
      sym__space,
  [3519] = 1,
    ACTIONS(1294), 1,
      sym__space,
  [3523] = 1,
    ACTIONS(1296), 1,
      sym__space,
  [3527] = 1,
    ACTIONS(1298), 1,
      sym__space,
  [3531] = 1,
    ACTIONS(1300), 1,
      sym__space,
  [3535] = 1,
    ACTIONS(1302), 1,
      sym__space,
  [3539] = 1,
    ACTIONS(1304), 1,
      sym__space,
  [3543] = 1,
    ACTIONS(1306), 1,
      sym__space,
  [3547] = 1,
    ACTIONS(1308), 1,
      sym__space,
  [3551] = 1,
    ACTIONS(1310), 1,
      sym__space,
  [3555] = 1,
    ACTIONS(1312), 1,
      sym__space,
  [3559] = 1,
    ACTIONS(1314), 1,
      sym__space,
  [3563] = 1,
    ACTIONS(1316), 1,
      sym__space,
  [3567] = 1,
    ACTIONS(1318), 1,
      sym__space,
  [3571] = 1,
    ACTIONS(1320), 1,
      sym__space,
  [3575] = 1,
    ACTIONS(1322), 1,
      sym__space,
  [3579] = 1,
    ACTIONS(1324), 1,
      sym__space,
  [3583] = 1,
    ACTIONS(1326), 1,
      sym__space,
  [3587] = 1,
    ACTIONS(1328), 1,
      sym__space,
  [3591] = 1,
    ACTIONS(1330), 1,
      sym__space,
  [3595] = 1,
    ACTIONS(1332), 1,
      sym__space,
  [3599] = 1,
    ACTIONS(1334), 1,
      sym__space,
  [3603] = 1,
    ACTIONS(1336), 1,
      sym__space,
  [3607] = 1,
    ACTIONS(1338), 1,
      sym__space,
  [3611] = 1,
    ACTIONS(1340), 1,
      sym__space,
  [3615] = 1,
    ACTIONS(1342), 1,
      sym__space,
  [3619] = 1,
    ACTIONS(1344), 1,
      sym__space,
  [3623] = 1,
    ACTIONS(1346), 1,
      sym__space,
  [3627] = 1,
    ACTIONS(1348), 1,
      sym__space,
  [3631] = 1,
    ACTIONS(1350), 1,
      sym__space,
  [3635] = 1,
    ACTIONS(1352), 1,
      sym__space,
  [3639] = 1,
    ACTIONS(1354), 1,
      sym__space,
  [3643] = 1,
    ACTIONS(1356), 1,
      sym__space,
  [3647] = 1,
    ACTIONS(1358), 1,
      sym__space,
  [3651] = 1,
    ACTIONS(1360), 1,
      sym__space,
  [3655] = 1,
    ACTIONS(1362), 1,
      sym__space,
  [3659] = 1,
    ACTIONS(1364), 1,
      sym__space,
  [3663] = 1,
    ACTIONS(1366), 1,
      sym__space,
  [3667] = 1,
    ACTIONS(1368), 1,
      sym__space,
  [3671] = 1,
    ACTIONS(1370), 1,
      sym__space,
  [3675] = 1,
    ACTIONS(1372), 1,
      sym__space,
  [3679] = 1,
    ACTIONS(1374), 1,
      sym__space,
  [3683] = 1,
    ACTIONS(1376), 1,
      sym__space,
  [3687] = 1,
    ACTIONS(1378), 1,
      sym__space,
  [3691] = 1,
    ACTIONS(1380), 1,
      sym__space,
  [3695] = 1,
    ACTIONS(1382), 1,
      sym__space,
  [3699] = 1,
    ACTIONS(1384), 1,
      sym__space,
  [3703] = 1,
    ACTIONS(1386), 1,
      sym__space,
  [3707] = 1,
    ACTIONS(1388), 1,
      sym__space,
  [3711] = 1,
    ACTIONS(1390), 1,
      sym__space,
  [3715] = 1,
    ACTIONS(1392), 1,
      sym__space,
  [3719] = 1,
    ACTIONS(1394), 1,
      sym__space,
  [3723] = 1,
    ACTIONS(1396), 1,
      sym__space,
  [3727] = 1,
    ACTIONS(1398), 1,
      sym__space,
  [3731] = 1,
    ACTIONS(1400), 1,
      sym__space,
  [3735] = 1,
    ACTIONS(1402), 1,
      sym__space,
  [3739] = 1,
    ACTIONS(1404), 1,
      sym__space,
  [3743] = 1,
    ACTIONS(1406), 1,
      sym__space,
  [3747] = 1,
    ACTIONS(1408), 1,
      sym__space,
  [3751] = 1,
    ACTIONS(1410), 1,
      sym__space,
  [3755] = 1,
    ACTIONS(1412), 1,
      sym__space,
  [3759] = 1,
    ACTIONS(1414), 1,
      sym__space,
  [3763] = 1,
    ACTIONS(1416), 1,
      sym__space,
  [3767] = 1,
    ACTIONS(1418), 1,
      sym__space,
  [3771] = 1,
    ACTIONS(1420), 1,
      sym__space,
  [3775] = 1,
    ACTIONS(1422), 1,
      sym__space,
  [3779] = 1,
    ACTIONS(1424), 1,
      sym__space,
  [3783] = 1,
    ACTIONS(1426), 1,
      sym__space,
  [3787] = 1,
    ACTIONS(1428), 1,
      sym__space,
  [3791] = 1,
    ACTIONS(1430), 1,
      sym__space,
  [3795] = 1,
    ACTIONS(1432), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 44,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 179,
  [SMALL_STATE(15)] = 199,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 237,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 332,
  [SMALL_STATE(23)] = 351,
  [SMALL_STATE(24)] = 370,
  [SMALL_STATE(25)] = 385,
  [SMALL_STATE(26)] = 404,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 442,
  [SMALL_STATE(29)] = 459,
  [SMALL_STATE(30)] = 476,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 514,
  [SMALL_STATE(33)] = 533,
  [SMALL_STATE(34)] = 552,
  [SMALL_STATE(35)] = 571,
  [SMALL_STATE(36)] = 586,
  [SMALL_STATE(37)] = 605,
  [SMALL_STATE(38)] = 624,
  [SMALL_STATE(39)] = 643,
  [SMALL_STATE(40)] = 662,
  [SMALL_STATE(41)] = 681,
  [SMALL_STATE(42)] = 700,
  [SMALL_STATE(43)] = 719,
  [SMALL_STATE(44)] = 738,
  [SMALL_STATE(45)] = 757,
  [SMALL_STATE(46)] = 776,
  [SMALL_STATE(47)] = 795,
  [SMALL_STATE(48)] = 814,
  [SMALL_STATE(49)] = 830,
  [SMALL_STATE(50)] = 846,
  [SMALL_STATE(51)] = 862,
  [SMALL_STATE(52)] = 878,
  [SMALL_STATE(53)] = 894,
  [SMALL_STATE(54)] = 910,
  [SMALL_STATE(55)] = 926,
  [SMALL_STATE(56)] = 942,
  [SMALL_STATE(57)] = 958,
  [SMALL_STATE(58)] = 974,
  [SMALL_STATE(59)] = 990,
  [SMALL_STATE(60)] = 1006,
  [SMALL_STATE(61)] = 1022,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1054,
  [SMALL_STATE(64)] = 1070,
  [SMALL_STATE(65)] = 1082,
  [SMALL_STATE(66)] = 1098,
  [SMALL_STATE(67)] = 1114,
  [SMALL_STATE(68)] = 1130,
  [SMALL_STATE(69)] = 1146,
  [SMALL_STATE(70)] = 1162,
  [SMALL_STATE(71)] = 1174,
  [SMALL_STATE(72)] = 1190,
  [SMALL_STATE(73)] = 1202,
  [SMALL_STATE(74)] = 1218,
  [SMALL_STATE(75)] = 1234,
  [SMALL_STATE(76)] = 1250,
  [SMALL_STATE(77)] = 1266,
  [SMALL_STATE(78)] = 1282,
  [SMALL_STATE(79)] = 1298,
  [SMALL_STATE(80)] = 1314,
  [SMALL_STATE(81)] = 1330,
  [SMALL_STATE(82)] = 1346,
  [SMALL_STATE(83)] = 1362,
  [SMALL_STATE(84)] = 1378,
  [SMALL_STATE(85)] = 1394,
  [SMALL_STATE(86)] = 1410,
  [SMALL_STATE(87)] = 1426,
  [SMALL_STATE(88)] = 1442,
  [SMALL_STATE(89)] = 1458,
  [SMALL_STATE(90)] = 1474,
  [SMALL_STATE(91)] = 1490,
  [SMALL_STATE(92)] = 1506,
  [SMALL_STATE(93)] = 1522,
  [SMALL_STATE(94)] = 1538,
  [SMALL_STATE(95)] = 1554,
  [SMALL_STATE(96)] = 1570,
  [SMALL_STATE(97)] = 1586,
  [SMALL_STATE(98)] = 1602,
  [SMALL_STATE(99)] = 1618,
  [SMALL_STATE(100)] = 1634,
  [SMALL_STATE(101)] = 1650,
  [SMALL_STATE(102)] = 1666,
  [SMALL_STATE(103)] = 1682,
  [SMALL_STATE(104)] = 1698,
  [SMALL_STATE(105)] = 1714,
  [SMALL_STATE(106)] = 1730,
  [SMALL_STATE(107)] = 1746,
  [SMALL_STATE(108)] = 1762,
  [SMALL_STATE(109)] = 1778,
  [SMALL_STATE(110)] = 1794,
  [SMALL_STATE(111)] = 1810,
  [SMALL_STATE(112)] = 1826,
  [SMALL_STATE(113)] = 1842,
  [SMALL_STATE(114)] = 1858,
  [SMALL_STATE(115)] = 1874,
  [SMALL_STATE(116)] = 1890,
  [SMALL_STATE(117)] = 1906,
  [SMALL_STATE(118)] = 1918,
  [SMALL_STATE(119)] = 1934,
  [SMALL_STATE(120)] = 1950,
  [SMALL_STATE(121)] = 1966,
  [SMALL_STATE(122)] = 1982,
  [SMALL_STATE(123)] = 1998,
  [SMALL_STATE(124)] = 2014,
  [SMALL_STATE(125)] = 2030,
  [SMALL_STATE(126)] = 2041,
  [SMALL_STATE(127)] = 2052,
  [SMALL_STATE(128)] = 2061,
  [SMALL_STATE(129)] = 2070,
  [SMALL_STATE(130)] = 2079,
  [SMALL_STATE(131)] = 2090,
  [SMALL_STATE(132)] = 2099,
  [SMALL_STATE(133)] = 2108,
  [SMALL_STATE(134)] = 2119,
  [SMALL_STATE(135)] = 2128,
  [SMALL_STATE(136)] = 2141,
  [SMALL_STATE(137)] = 2154,
  [SMALL_STATE(138)] = 2163,
  [SMALL_STATE(139)] = 2172,
  [SMALL_STATE(140)] = 2181,
  [SMALL_STATE(141)] = 2190,
  [SMALL_STATE(142)] = 2201,
  [SMALL_STATE(143)] = 2210,
  [SMALL_STATE(144)] = 2219,
  [SMALL_STATE(145)] = 2230,
  [SMALL_STATE(146)] = 2240,
  [SMALL_STATE(147)] = 2250,
  [SMALL_STATE(148)] = 2258,
  [SMALL_STATE(149)] = 2268,
  [SMALL_STATE(150)] = 2278,
  [SMALL_STATE(151)] = 2286,
  [SMALL_STATE(152)] = 2296,
  [SMALL_STATE(153)] = 2306,
  [SMALL_STATE(154)] = 2313,
  [SMALL_STATE(155)] = 2320,
  [SMALL_STATE(156)] = 2327,
  [SMALL_STATE(157)] = 2334,
  [SMALL_STATE(158)] = 2341,
  [SMALL_STATE(159)] = 2348,
  [SMALL_STATE(160)] = 2355,
  [SMALL_STATE(161)] = 2362,
  [SMALL_STATE(162)] = 2369,
  [SMALL_STATE(163)] = 2376,
  [SMALL_STATE(164)] = 2383,
  [SMALL_STATE(165)] = 2390,
  [SMALL_STATE(166)] = 2397,
  [SMALL_STATE(167)] = 2404,
  [SMALL_STATE(168)] = 2411,
  [SMALL_STATE(169)] = 2418,
  [SMALL_STATE(170)] = 2425,
  [SMALL_STATE(171)] = 2432,
  [SMALL_STATE(172)] = 2439,
  [SMALL_STATE(173)] = 2446,
  [SMALL_STATE(174)] = 2453,
  [SMALL_STATE(175)] = 2460,
  [SMALL_STATE(176)] = 2467,
  [SMALL_STATE(177)] = 2474,
  [SMALL_STATE(178)] = 2481,
  [SMALL_STATE(179)] = 2488,
  [SMALL_STATE(180)] = 2495,
  [SMALL_STATE(181)] = 2502,
  [SMALL_STATE(182)] = 2509,
  [SMALL_STATE(183)] = 2516,
  [SMALL_STATE(184)] = 2523,
  [SMALL_STATE(185)] = 2530,
  [SMALL_STATE(186)] = 2537,
  [SMALL_STATE(187)] = 2544,
  [SMALL_STATE(188)] = 2551,
  [SMALL_STATE(189)] = 2558,
  [SMALL_STATE(190)] = 2565,
  [SMALL_STATE(191)] = 2572,
  [SMALL_STATE(192)] = 2579,
  [SMALL_STATE(193)] = 2586,
  [SMALL_STATE(194)] = 2593,
  [SMALL_STATE(195)] = 2600,
  [SMALL_STATE(196)] = 2607,
  [SMALL_STATE(197)] = 2614,
  [SMALL_STATE(198)] = 2621,
  [SMALL_STATE(199)] = 2628,
  [SMALL_STATE(200)] = 2635,
  [SMALL_STATE(201)] = 2642,
  [SMALL_STATE(202)] = 2649,
  [SMALL_STATE(203)] = 2656,
  [SMALL_STATE(204)] = 2663,
  [SMALL_STATE(205)] = 2670,
  [SMALL_STATE(206)] = 2677,
  [SMALL_STATE(207)] = 2684,
  [SMALL_STATE(208)] = 2691,
  [SMALL_STATE(209)] = 2698,
  [SMALL_STATE(210)] = 2705,
  [SMALL_STATE(211)] = 2712,
  [SMALL_STATE(212)] = 2719,
  [SMALL_STATE(213)] = 2726,
  [SMALL_STATE(214)] = 2733,
  [SMALL_STATE(215)] = 2740,
  [SMALL_STATE(216)] = 2747,
  [SMALL_STATE(217)] = 2754,
  [SMALL_STATE(218)] = 2761,
  [SMALL_STATE(219)] = 2768,
  [SMALL_STATE(220)] = 2775,
  [SMALL_STATE(221)] = 2782,
  [SMALL_STATE(222)] = 2789,
  [SMALL_STATE(223)] = 2796,
  [SMALL_STATE(224)] = 2803,
  [SMALL_STATE(225)] = 2810,
  [SMALL_STATE(226)] = 2817,
  [SMALL_STATE(227)] = 2824,
  [SMALL_STATE(228)] = 2831,
  [SMALL_STATE(229)] = 2838,
  [SMALL_STATE(230)] = 2845,
  [SMALL_STATE(231)] = 2852,
  [SMALL_STATE(232)] = 2859,
  [SMALL_STATE(233)] = 2866,
  [SMALL_STATE(234)] = 2873,
  [SMALL_STATE(235)] = 2880,
  [SMALL_STATE(236)] = 2887,
  [SMALL_STATE(237)] = 2894,
  [SMALL_STATE(238)] = 2901,
  [SMALL_STATE(239)] = 2908,
  [SMALL_STATE(240)] = 2915,
  [SMALL_STATE(241)] = 2922,
  [SMALL_STATE(242)] = 2929,
  [SMALL_STATE(243)] = 2936,
  [SMALL_STATE(244)] = 2943,
  [SMALL_STATE(245)] = 2950,
  [SMALL_STATE(246)] = 2957,
  [SMALL_STATE(247)] = 2964,
  [SMALL_STATE(248)] = 2971,
  [SMALL_STATE(249)] = 2978,
  [SMALL_STATE(250)] = 2985,
  [SMALL_STATE(251)] = 2992,
  [SMALL_STATE(252)] = 2999,
  [SMALL_STATE(253)] = 3006,
  [SMALL_STATE(254)] = 3013,
  [SMALL_STATE(255)] = 3020,
  [SMALL_STATE(256)] = 3027,
  [SMALL_STATE(257)] = 3034,
  [SMALL_STATE(258)] = 3041,
  [SMALL_STATE(259)] = 3048,
  [SMALL_STATE(260)] = 3055,
  [SMALL_STATE(261)] = 3062,
  [SMALL_STATE(262)] = 3069,
  [SMALL_STATE(263)] = 3076,
  [SMALL_STATE(264)] = 3083,
  [SMALL_STATE(265)] = 3090,
  [SMALL_STATE(266)] = 3097,
  [SMALL_STATE(267)] = 3104,
  [SMALL_STATE(268)] = 3111,
  [SMALL_STATE(269)] = 3118,
  [SMALL_STATE(270)] = 3125,
  [SMALL_STATE(271)] = 3132,
  [SMALL_STATE(272)] = 3139,
  [SMALL_STATE(273)] = 3146,
  [SMALL_STATE(274)] = 3153,
  [SMALL_STATE(275)] = 3160,
  [SMALL_STATE(276)] = 3167,
  [SMALL_STATE(277)] = 3174,
  [SMALL_STATE(278)] = 3181,
  [SMALL_STATE(279)] = 3188,
  [SMALL_STATE(280)] = 3195,
  [SMALL_STATE(281)] = 3202,
  [SMALL_STATE(282)] = 3209,
  [SMALL_STATE(283)] = 3216,
  [SMALL_STATE(284)] = 3223,
  [SMALL_STATE(285)] = 3230,
  [SMALL_STATE(286)] = 3237,
  [SMALL_STATE(287)] = 3244,
  [SMALL_STATE(288)] = 3251,
  [SMALL_STATE(289)] = 3258,
  [SMALL_STATE(290)] = 3265,
  [SMALL_STATE(291)] = 3272,
  [SMALL_STATE(292)] = 3279,
  [SMALL_STATE(293)] = 3286,
  [SMALL_STATE(294)] = 3293,
  [SMALL_STATE(295)] = 3300,
  [SMALL_STATE(296)] = 3307,
  [SMALL_STATE(297)] = 3314,
  [SMALL_STATE(298)] = 3321,
  [SMALL_STATE(299)] = 3328,
  [SMALL_STATE(300)] = 3335,
  [SMALL_STATE(301)] = 3342,
  [SMALL_STATE(302)] = 3349,
  [SMALL_STATE(303)] = 3356,
  [SMALL_STATE(304)] = 3363,
  [SMALL_STATE(305)] = 3370,
  [SMALL_STATE(306)] = 3377,
  [SMALL_STATE(307)] = 3384,
  [SMALL_STATE(308)] = 3391,
  [SMALL_STATE(309)] = 3398,
  [SMALL_STATE(310)] = 3405,
  [SMALL_STATE(311)] = 3412,
  [SMALL_STATE(312)] = 3419,
  [SMALL_STATE(313)] = 3423,
  [SMALL_STATE(314)] = 3427,
  [SMALL_STATE(315)] = 3431,
  [SMALL_STATE(316)] = 3435,
  [SMALL_STATE(317)] = 3439,
  [SMALL_STATE(318)] = 3443,
  [SMALL_STATE(319)] = 3447,
  [SMALL_STATE(320)] = 3451,
  [SMALL_STATE(321)] = 3455,
  [SMALL_STATE(322)] = 3459,
  [SMALL_STATE(323)] = 3463,
  [SMALL_STATE(324)] = 3467,
  [SMALL_STATE(325)] = 3471,
  [SMALL_STATE(326)] = 3475,
  [SMALL_STATE(327)] = 3479,
  [SMALL_STATE(328)] = 3483,
  [SMALL_STATE(329)] = 3487,
  [SMALL_STATE(330)] = 3491,
  [SMALL_STATE(331)] = 3495,
  [SMALL_STATE(332)] = 3499,
  [SMALL_STATE(333)] = 3503,
  [SMALL_STATE(334)] = 3507,
  [SMALL_STATE(335)] = 3511,
  [SMALL_STATE(336)] = 3515,
  [SMALL_STATE(337)] = 3519,
  [SMALL_STATE(338)] = 3523,
  [SMALL_STATE(339)] = 3527,
  [SMALL_STATE(340)] = 3531,
  [SMALL_STATE(341)] = 3535,
  [SMALL_STATE(342)] = 3539,
  [SMALL_STATE(343)] = 3543,
  [SMALL_STATE(344)] = 3547,
  [SMALL_STATE(345)] = 3551,
  [SMALL_STATE(346)] = 3555,
  [SMALL_STATE(347)] = 3559,
  [SMALL_STATE(348)] = 3563,
  [SMALL_STATE(349)] = 3567,
  [SMALL_STATE(350)] = 3571,
  [SMALL_STATE(351)] = 3575,
  [SMALL_STATE(352)] = 3579,
  [SMALL_STATE(353)] = 3583,
  [SMALL_STATE(354)] = 3587,
  [SMALL_STATE(355)] = 3591,
  [SMALL_STATE(356)] = 3595,
  [SMALL_STATE(357)] = 3599,
  [SMALL_STATE(358)] = 3603,
  [SMALL_STATE(359)] = 3607,
  [SMALL_STATE(360)] = 3611,
  [SMALL_STATE(361)] = 3615,
  [SMALL_STATE(362)] = 3619,
  [SMALL_STATE(363)] = 3623,
  [SMALL_STATE(364)] = 3627,
  [SMALL_STATE(365)] = 3631,
  [SMALL_STATE(366)] = 3635,
  [SMALL_STATE(367)] = 3639,
  [SMALL_STATE(368)] = 3643,
  [SMALL_STATE(369)] = 3647,
  [SMALL_STATE(370)] = 3651,
  [SMALL_STATE(371)] = 3655,
  [SMALL_STATE(372)] = 3659,
  [SMALL_STATE(373)] = 3663,
  [SMALL_STATE(374)] = 3667,
  [SMALL_STATE(375)] = 3671,
  [SMALL_STATE(376)] = 3675,
  [SMALL_STATE(377)] = 3679,
  [SMALL_STATE(378)] = 3683,
  [SMALL_STATE(379)] = 3687,
  [SMALL_STATE(380)] = 3691,
  [SMALL_STATE(381)] = 3695,
  [SMALL_STATE(382)] = 3699,
  [SMALL_STATE(383)] = 3703,
  [SMALL_STATE(384)] = 3707,
  [SMALL_STATE(385)] = 3711,
  [SMALL_STATE(386)] = 3715,
  [SMALL_STATE(387)] = 3719,
  [SMALL_STATE(388)] = 3723,
  [SMALL_STATE(389)] = 3727,
  [SMALL_STATE(390)] = 3731,
  [SMALL_STATE(391)] = 3735,
  [SMALL_STATE(392)] = 3739,
  [SMALL_STATE(393)] = 3743,
  [SMALL_STATE(394)] = 3747,
  [SMALL_STATE(395)] = 3751,
  [SMALL_STATE(396)] = 3755,
  [SMALL_STATE(397)] = 3759,
  [SMALL_STATE(398)] = 3763,
  [SMALL_STATE(399)] = 3767,
  [SMALL_STATE(400)] = 3771,
  [SMALL_STATE(401)] = 3775,
  [SMALL_STATE(402)] = 3779,
  [SMALL_STATE(403)] = 3783,
  [SMALL_STATE(404)] = 3787,
  [SMALL_STATE(405)] = 3791,
  [SMALL_STATE(406)] = 3795,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(2),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(279),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(279),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(406),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(405),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(401),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(400),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(399),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(398),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(396),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(394),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(392),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(391),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(390),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(389),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(388),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(387),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(386),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(385),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(384),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(383),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(382),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(381),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(380),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(377),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(376),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(375),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(374),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(373),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(372),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(371),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(369),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(368),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(367),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(366),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(365),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(364),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(363),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(361),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(360),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(359),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(358),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(357),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(356),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(355),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(354),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(353),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(352),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(351),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(349),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(347),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(346),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(344),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(343),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(341),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(340),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(338),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(336),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(333),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(332),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(331),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(330),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(328),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(327),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(326),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(325),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(324),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(323),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(322),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(321),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(320),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(319),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(317),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(313),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(318),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(316),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(315),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(314),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(334),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(335),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(337),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(339),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(342),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(345),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(348),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(312),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(329),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(350),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(362),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(370),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(379),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(393),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(395),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(397),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(402),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(403),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(404),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(253),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2), SHIFT_REPEAT(35),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2), SHIFT_REPEAT(10),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__default_preference_list_repeat1, 2), SHIFT_REPEAT(10),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__default_preference_list_repeat1, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_value, 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__default_preference_value, 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(70),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(70),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(72),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(72),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 3, .production_id = 6),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(133),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(133),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 13),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(146),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(64),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 13), SHIFT_REPEAT(64),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 3, .production_id = 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 3, .production_id = 6),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notation, 2),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(130),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(130),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 3, .production_id = 6),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 4, .production_id = 10),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 4, .production_id = 10),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 4, .production_id = 10),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 4, .production_id = 10),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 4, .production_id = 8),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(141),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(141),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 3, .production_id = 6),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 4, .production_id = 5),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2), SHIFT_REPEAT(286),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2), SHIFT_REPEAT(49),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 4),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 4, .production_id = 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(281),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(134),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 4, .production_id = 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(283),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(137),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 4),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 1, .production_id = 7),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 1, .production_id = 7),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(284),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(139),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [760] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 4),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2), SHIFT_REPEAT(278),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2), SHIFT_REPEAT(75),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2), SHIFT_REPEAT(311),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2), SHIFT_REPEAT(87),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 3, .production_id = 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 3, .production_id = 5),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 3, .production_id = 5),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 3),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 3),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2), SHIFT_REPEAT(232),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2), SHIFT_REPEAT(103),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 3),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(125),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [847] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(125),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2),
  [856] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2), SHIFT_REPEAT(276),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2), SHIFT_REPEAT(115),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 12),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 12),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2), SHIFT_REPEAT(285),
  [871] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2), SHIFT_REPEAT(118),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notation, 1),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__notation, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2, .production_id = 15),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 1),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 1, .production_id = 9),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 1, .production_id = 9),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 1, .production_id = 9),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2, .production_id = 15),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2, .production_id = 15),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 3),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 11),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marginals_needed, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_notation, 6, .production_id = 17),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_key, 3),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__photo_viewer, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 1),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec_path, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyring, 3),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_keyring, 3),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trustdb_name, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_charset, 3),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_level, 3),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bzip2_compress_level, 3),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_level, 3),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_cert_level, 3),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trusted_key, 3),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 3),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trust_model, 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assert_signer, 3),
  [1078] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyid_format, 3),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver, 3),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__completes_needed, 3),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tofu_default_policy, 3),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_cert_depth, 3),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agent_program, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dirmngr_program, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__limit_card_insert_tries, 3),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient, 3),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient, 3),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient_file, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient_file, 3),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__encrypt_to, 3),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_encrypt_to, 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ungroup, 3),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_user, 3),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sender, 3),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__try_secret_name, 3),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_output, 3),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_size, 3),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_size_hint, 3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_notation, 6, .production_id = 17),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_notation, 6, .production_id = 17),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_notation, 5, .production_id = 16),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_notation, 5, .production_id = 16),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_notation, 5, .production_id = 16),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_cipher_algo, 3, .production_id = 5),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_digest_algo, 3, .production_id = 5),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_mode, 3),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_count, 3),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compliance, 3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_rsa_length, 3),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_level, 3),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 5),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_set_iobuf_size, 3),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 5, .production_id = 14),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_fd, 3),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_file, 3),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_fd, 3),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_file, 3),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 11),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 4),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_notation, 3),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 4),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_filename, 3),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cipher_algo, 3, .production_id = 5),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digest_algo, 3, .production_id = 5),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_algo, 3, .production_id = 5),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_digest_algo, 3, .production_id = 5),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_cipher_algo, 3, .production_id = 5),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_pubkey_algo, 3, .production_id = 5),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_repeat, 3),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_fd, 3),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_file, 3),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase, 3),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pinentry_mode, 3),
  [1222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_origin, 3),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_fd, 3),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_file, 3),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__weak_digest, 3, .production_id = 5),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key_fd, 3),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_sig_expire, 3),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_expire, 3),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_keyserver_url, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chuid, 3),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gpg(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
