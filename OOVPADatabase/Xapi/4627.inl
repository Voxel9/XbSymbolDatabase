// ******************************************************************
// *
// *   OOVPADatabase->Xapi->4627.inl
// *
// *  XbSymbolDatabase is free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * RtlFreeHeap
// ******************************************************************
OOVPA_NO_XREF(RtlFreeHeap, 4627, 9)

        { 0x1F, 0x85 },
        { 0x20, 0xFF },

        { 0x23, 0xB0 },
        { 0x24, 0x01 },

        { 0x35, 0x64 },
        { 0x36, 0xA1 },
        { 0x37, 0x20 },

        { 0x49, 0x6A },
        { 0x4A, 0x0B },
OOVPA_END;

// ******************************************************************
// * RtlReAllocateHeap
// ******************************************************************
OOVPA_NO_XREF(RtlReAllocateHeap, 4627, 10)

        { 0x1C, 0x85 },
        { 0x1D, 0xF6 },

        { 0x26, 0x09 },
        { 0x27, 0x4D },
        { 0x28, 0x0C },

        { 0x61, 0x74 },
        { 0x62, 0x06 },
        { 0x63, 0x83 },
        { 0x64, 0xC1 },
        { 0x65, 0x10 },
OOVPA_END;
