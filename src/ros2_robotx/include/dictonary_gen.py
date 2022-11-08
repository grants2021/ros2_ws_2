#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Nov  7 17:55:23 2022

@author: grant
"""
import sys
sys.path.append(r'/home/grant/miniconda3/lib/python3.8/site-packages')

import pandas as pd

def ids_dict():
    ids_to_find = [72,129]
    marker_sizes = [20.0,40.0] #cm
    marker_heights = [4,7]
    
    found_count = [0]*len(ids_to_find)
    notfound_count = [0]*len(ids_to_find)
    enotfound_count = [0]*len(ids_to_find)
    x_avg = [0]*len(ids_to_find)
    y_avg = [0]*len(ids_to_find)
    last_seen = [0]*len(ids_to_find)
    
    IDs_Dict = pd.DataFrame([marker_sizes,marker_heights,found_count,notfound_count,\
                                enotfound_count,x_avg,y_avg,\
                                    last_seen],columns=ids_to_find,
                               index=['size','height','fcount','nfcount','enfcount',\
                                      'xloc','yloc','lastT'])
    return IDs_Dict