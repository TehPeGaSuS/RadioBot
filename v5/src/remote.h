//@AUTOHEADER@BEGIN@
/**********************************************************************\
|                          ShoutIRC RadioBot                           |
|           Copyright 2004-2020 Drift Solutions / Indy Sams            |
|        More information available at https://www.shoutirc.com        |
|                                                                      |
|                    This file is part of RadioBot.                    |
|                                                                      |
|   RadioBot is free software: you can redistribute it and/or modify   |
| it under the terms of the GNU General Public License as published by |
|  the Free Software Foundation, either version 3 of the License, or   |
|                 (at your option) any later version.                  |
|                                                                      |
|     RadioBot is distributed in the hope that it will be useful,      |
|    but WITHOUT ANY WARRANTY; without even the implied warranty of    |
|     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the     |
|             GNU General Public License for more details.             |
|                                                                      |
|  You should have received a copy of the GNU General Public License   |
|  along with RadioBot. If not, see <https://www.gnu.org/licenses/>.   |
\**********************************************************************/
//@AUTOHEADER@END@


#ifndef __INCLUDE_IRCBOT_REMOTE_H__
#define __INCLUDE_IRCBOT_REMOTE_H__

#define REMOTE_FLAG_RCONSOLE 0x00000001

THREADTYPE remoteThread(void *lpData);
THREADTYPE remoteThreadStarter(void *lpData);

void SendRemoteReply(T_SOCKET * sock, REMOTE_HEADER * rHead, const char * data);

#if defined(IRCBOT_ENABLE_SS)
void remote_req_timeout(bool all=false);
#endif

#endif
