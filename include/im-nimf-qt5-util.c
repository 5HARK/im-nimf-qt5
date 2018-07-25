/* -*- Mode: C; indent-tabs-mode: nil; c-basic-offset: 2; tab-width: 2 -*- */
/*
 * im-nimf-qt5-util.c
 *
 * Copyright (C) 2018 Kyuhyun Shin <blgf6190@gmail.com>
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program;  If not, see <http://www.gnu.org/licenses/>.
 */

#include "im-nimf-qt5-util.h"

int cfileexists(const char* filename)
{
  struct stat buffer;
  int exist = stat(filename, &buffer);
  if(exist == 0)
    return 1;
  else // -1
    return 0;
}

const char* nimf_util_get_runtime_dir(void)
{
  uid_t uid;
  char* path;

  uid = getuid();
  path = (char*)malloc(100 * sizeof(char));
  
  sprintf(path, NIMF_RUNTIME_DIR1, uid);
  if(cfileexists(path)){
    free(path);
    return NIMF_RUNTIME_DIR1"/socket";
  }

  sprintf(path, NIMF_RUNTIME_DIR2, uid);
  if(cfileexists(path)){
    free(path);
    return NIMF_RUNTIME_DIR2"/socket";
  }

  sprintf(path, NIMF_RUNTIME_DIR3, uid);
  if(cfileexists(path)){
    free(path);
    return NIMF_RUNTIME_DIR3"/socket";
  }

  free(path);
  return NIMF_RUNTIME_DIR3"/socket";
}
