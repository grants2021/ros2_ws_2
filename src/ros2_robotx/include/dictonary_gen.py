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

def lp_dict():
    LP_ids = [0,1] #0 = empty 1 = full
    LP_sizes = [200,200] #cm
    LP_heights = [7,7]

    LP_found_count = [0]*len(LP_ids)
    LP_notfound_count = [0]*len(LP_ids)
    LP_enotfound_count = [0]*len(LP_ids)
    LP_latlong = [0]*len(LP_ids)
    LP_last_seen = [0]*len(LP_ids)
    
    LP_Dict = pd.DataFrame([LP_sizes,LP_heights,LP_found_count,\
                            LP_notfound_count,LP_enotfound_count,LP_latlong,\
                                LP_last_seen],columns=LP_ids,
                               index=['size','height','fcount','nfcount','enfcount',\
                                      'latlong','lastT'])
    return LP_Dict