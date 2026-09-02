"use client"
import { useSearchParams } from 'next/navigation'
import React from 'react'

const page = () => {

    const searchParams = useSearchParams()
    const name=searchParams.getAll("name")
    const age = searchParams.getAll("age")

    console.log(searchParams)
    console.log(name);
    console.log(age);
  return (
    <div>
     <div> page dashboard</div>
<div>Search Values ={name ?? "not available"} {age} </div>
    </div>
  )
}

export default page
