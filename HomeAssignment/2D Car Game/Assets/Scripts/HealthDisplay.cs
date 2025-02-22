﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthDisplay : MonoBehaviour
{
    Text HealthText;
    Player player;
    // Start is called before the first frame update
    void Start()
    {
        HealthText = GetComponent<Text>();
        player = FindObjectOfType<Player>();
    }

    // Update is called once per frame
    void Update()
    {
        HealthText.text = player.getHealth().ToString();        
    }
}

