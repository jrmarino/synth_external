--  Generated by utildgen.c from system includes
with Interfaces.C;
package Util.Systems.Types is

   subtype dev_t is Interfaces.C.unsigned;
   subtype ino_t is Long_Long_Integer;
   subtype off_t is Long_Long_Integer;
   subtype blksize_t is Long_Long_Integer;
   subtype blkcnt_t is Long_Long_Integer;
   subtype uid_t is Interfaces.C.unsigned;
   subtype gid_t is Interfaces.C.unsigned;
   subtype nlink_t is Interfaces.C.unsigned;
   subtype mode_t is Interfaces.C.unsigned_short;

   S_IFMT   : constant mode_t := 8#00170000#;
   S_IFDIR  : constant mode_t := 8#00040000#;
   S_IFCHR  : constant mode_t := 8#00020000#;
   S_IFBLK  : constant mode_t := 8#00060000#;
   S_IFREG  : constant mode_t := 8#00100000#;
   S_IFIFO  : constant mode_t := 8#00010000#;
   S_IFLNK  : constant mode_t := 8#00120000#;
   S_IFSOCK : constant mode_t := 8#00140000#;
   S_ISUID  : constant mode_t := 8#00004000#;
   S_ISGID  : constant mode_t := 8#00002000#;
   S_IREAD  : constant mode_t := 8#00000400#;
   S_IWRITE : constant mode_t := 8#00000200#;
   S_IEXEC  : constant mode_t := 8#00000100#;

   subtype Time_Type is Long_Long_Integer;

   type Timespec is record
      tv_sec  : Time_Type;
      tv_nsec : Long_Long_Integer;
   end record;
   pragma Convention (C_Pass_By_Copy, Timespec);

   subtype uint16_t is Interfaces.C.unsigned_short;
   subtype u_int32_t is Interfaces.C.unsigned;
   subtype int32_t is Interfaces.C.int;
   subtype int64_t is Long_Long_Integer;
   STAT_NAME  : constant String := "stat";
   FSTAT_NAME : constant String := "fstat";
   type Stat_Type is record
      st_ino      : ino_t;
      st_nlink    : nlink_t;
      st_dev      : dev_t;
      st_mode     : mode_t;
      st_padding1 : uint16_t;
      st_uid      : uid_t;
      st_gid      : gid_t;
      st_rdev     : dev_t;
      st_atim     : Timespec;
      st_mtim     : Timespec;
      st_ctim     : Timespec;
      st_size     : off_t;
      st_blocks   : int64_t;
      st_blksize  : u_int32_t;
      st_flags    : u_int32_t;
      st_gen      : u_int32_t;
      st_lspare   : int32_t;
      st_qspare1  : int64_t;
      st_qspare2  : int64_t;
   end record;
   pragma Convention (C_Pass_By_Copy, Stat_Type);


end Util.Systems.Types;