//
//  root-rw.h
//  Meridian
//
//  Created by Ben Sparkes on 16/12/2017.
//  Copyright © 2017 Ben Sparkes. All rights reserved.
//

#include <mach/mach.h>
#include <sys/mount.h>

int mount_root(task_t tfp0, uint64_t kslide, uint64_t kern_cred, int pre103);
int can_write_root(void);
